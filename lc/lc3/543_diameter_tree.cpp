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
    int val = 0;
    int dfs(TreeNode *r) {
        if(!r) return 0;
        int left=dfs(r->left);
        int right=dfs(r->right);
        val = max(val, left+right);

        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return val;
    }
};