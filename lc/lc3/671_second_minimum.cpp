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
    void dfs(TreeNode* root, set<int> &st) {
        if(root == NULL) return;
        dfs(root->left, st);
        st.insert(root->val);
        dfs(root->right, st);
    }

    int findSecondMinimumValue(TreeNode* root) {
        set<int> st;
        priority_queue<int, vector<int>, greater<int>> pq;
        dfs(root, st);
        for(auto it = st.begin(); it!=st.end(); it++) {
            pq.push(*it);
        }   
        if(pq.size() <=1) return -1;
        pq.pop();
        return pq.top();
    }
};