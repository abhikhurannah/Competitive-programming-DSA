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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int swaps = 0;
        while(!q.empty()){
            int sz = q.size();
            vector<int> arr(sz,0), idx(sz,0);
            for(int i=0;i<sz;i++){
                TreeNode* node = q.front();
                q.pop();
                arr[i] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            iota(idx.begin(),idx.end(),0);
            sort(idx.begin(),idx.end(),[&](int i, int j){
                return arr[i] < arr[j];
            });
            for(int i=0;i<sz;){
                int j = idx[i];
                if(j != i){
                    swaps++;
                    swap(idx[i],idx[j]);
                }else i++;
            }
        }
        return swaps;
    }
};