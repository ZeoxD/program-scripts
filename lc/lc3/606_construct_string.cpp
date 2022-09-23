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
    string s = "";
    void dfs(TreeNode* root) {
        if(!root) return;
        s += "(";
        s += char(root->val+48); 
        if(!root->left && root->right) s += "()";
        dfs(root->left);
        dfs(root->right);
        s += ")";
    }
    string tree2str(TreeNode* root) {
        dfs(root);
        return s.substr(1,s.size()-2);
    }
};