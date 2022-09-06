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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int ls = 0;
        if(root->left) {
            if(!root->left->left and !root->left->right) ls += root->left->val;
            else ls += sumOfLeftLeaves(root->left);
        }
        if(root->right) if(root->right->left || root->right->right) ls += sumOfLeftLeaves(root->right);
        return ls;
    }
};