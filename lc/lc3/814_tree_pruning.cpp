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
    bool modifyTree(TreeNode* node) {
        if(!node) return NULL;
        bool left = modifyTree(node->left);
        bool right = modifyTree(node->right);
        if(!left) node->left = NULL;
        if(!right) node->right = NULL;
        return node->val == 1 || left || right;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(!root) return NULL;
        modifyTree(root);
        if(!root->val && !root->left && !root->right) return NULL;
        return root;
    }
};