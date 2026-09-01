/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map: col -> (row -> multiset of node values at (col, row))
        map<int, map<int, multiset<int>>> mp;
        // Queue: {node, {col, row}}
        queue<pair<TreeNode*, pair<int, int>>> q;
        if (root) q.push({root, {0, 0}});
        
        while(!q.empty()){
            auto [node, it] = q.front(); q.pop();
            auto [c,r] = it;
            mp[c][r].insert(node->val);
            if(node->left) q.push({node->left, {c-1,r+1}} );
            if(node->right) q.push({node->right, {c+1,r+1}} );
        }
        vector<vector<int>> ans;
        for(auto [c, rowmp] : mp){
            vector<int>vec;
            for(auto [r, st] : rowmp){
                for(auto x: st) vec.push_back(x);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};