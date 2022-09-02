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
    int dfs(TreeNode *root, int n) {
        if(!root) return 0;
        int num;
        num = num * 10 + root->val;
        if(!root->right and !root->left) return num;
        return dfs(root->left, num) + dfs(root->right, num);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);      
    }
};