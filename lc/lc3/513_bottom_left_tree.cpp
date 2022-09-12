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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode* > q;
        int val;
        q.push(root);
        while(!q.empty()) {
            auto node = q.front(); q.pop();
            if(node) {  
                val = node->val;
                q.push(node->right);
                q.push(node->left);
            }
        }
        return val;
    }
};