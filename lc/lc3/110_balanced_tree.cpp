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
    pair<bool, int> dfs(TreeNode* root) {
        if(!root) return {true, 0};
        pair<bool, int> left = dfs(root->left), right = dfs(root->right);
        bool balance = left.first and right.first and abs(left.second - right.second) < 2;
        return {balance, 1 + max(left.second, right.second)};
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }
};