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
    vector<int> vtr;
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        return inorderTraversal(root->left);
        vtr.push_back(root->val);
        return inorderTraversal(root->right);
        return vtr;
    }
};