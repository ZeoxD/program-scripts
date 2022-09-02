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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vtr;
        if(!root) return vtr;
        vector<int> v;
        queue<TreeNode*> q;
        queue<TreeNode*> s;
        q.push(root);
        while(!q.empty()) {
            auto n = q.front(); q.pop();
            v.push_back(n->val);
            if(n->left) s.push(n->left);
            if(n->right) s.push(n->right);
            if(q.empty()) {
                q.swap(s);
                vtr.push_back(v);
                v.clear();
            }
        }
        reverse(vtr.begin(), vtr.end());
        return vtr;
    }
};