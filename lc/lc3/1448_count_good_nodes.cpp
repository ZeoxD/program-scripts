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
    int count = 0;
    void dfs(TreeNode *root, int mv) {
        if(!root) return;
        if(root->val >= mv) count++;
        dfs(root->left, root->val>mv?root->val:mv);
        dfs(root->right, root->val>mv?root->val:mv);
    }

    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    }
};