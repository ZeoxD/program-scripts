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
    int depth(TreeNode* root) {
        if(!root) return 0;
        return max(depth(root->left),depth(root->right))+1;
    }

    void levelOrder(vector<vector<int> &vtr, TreeNode* root, int d) {
        if(!root) return;
        vtr[d].push_back(root->val);
        levelOrder(vtr, root->left, d-1);
        levelOrder(vtr, root->right, d-1);

    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d = depth(root);
        vector<vector<int>> vtr(d, vector<int>());
        levelOrder(vtr, root, d-1);
        return vtr;
    }
};