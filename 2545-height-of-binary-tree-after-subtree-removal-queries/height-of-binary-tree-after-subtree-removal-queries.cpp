class Solution {
public:
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        // step 1 : node -> level
        map<int,int>mp;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto [node, level] = q.front(); q.pop();
            mp[node->val] = level;
            if(node->left) q.push({node->left,level+1});
            if(node->right) q.push({node->right,level+1});
        }

        // step 2 : level -> {mx, smx,...}
        map<int,priority_queue<pair<int,TreeNode*>>> lvl_to_ht;
        auto dfs = [&](TreeNode* node, auto &&dfs, int lvl) -> int{
            if(!node) return 0;
            int h1 = 0, h2 = 0;
            if(node->left){
                h1 = dfs(node->left,dfs, lvl+1);
            } 
            if(node->right) {
                h2 = dfs(node->right,dfs,  lvl+1);
            }
            int h = max(h1,h2) + 1 ;
            lvl_to_ht[lvl].push({h,node});
            return h;
        };
        dfs(root, dfs, 0);
        
        vector<int> ans;
        for(auto q : queries){
            int lvl = mp[q];
            auto [ht, node] = lvl_to_ht[lvl].top();
            
            int tree_height;
            if(node->val == q){
                if(lvl_to_ht[lvl].size() > 1){
                    auto it = lvl_to_ht[lvl].top(); 
                    lvl_to_ht[lvl].pop();
                    int ht2 = lvl_to_ht[lvl].top().first;
                    lvl_to_ht[lvl].push(it);
                    
                    tree_height = lvl + ht2 - 1;
                } else {
                    tree_height = lvl - 1;
                }
            } else {
                tree_height = lvl + ht - 1;
            }
            
            ans.push_back(tree_height);
        }
        return ans;
    }
};