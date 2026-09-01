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
    TreeNode* pruneTree(TreeNode* root) {
        auto f = [&](auto &&f, TreeNode* node) ->bool {
            if(!node ||  (!node->left && !node->right && (node->val == 0))){
                return true;
            }
            bool lft = f(f,node->left);
            bool rht = f(f, node->right);
            if(lft) node->left = NULL;  
            if(rht) node->right = NULL; 
            return lft && rht && node->val == 0;
        };
        
        return !f(f,root) ? root : NULL;
    }
};