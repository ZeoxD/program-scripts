/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> vtr;
        vector<int> v;
        if(!root) return vtr;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            v.clear();
            while(size--) {
                auto n = q.front(); q.pop();
                v.push_back(n->val);
                for(auto node: n->children) q.push(node);
            }
            vtr.push_back(v);
        }
        return vtr;
    }
};