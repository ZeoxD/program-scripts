/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> vtr, st;
        
        for(auto cur = head; cur != nullptr; cur = cur->next) {
            vtr.push_back(cur->val);
        }
        
        for(int i = 0; i < vtr.size(); i++) {
            while(!st.empty() && vtr[st.back()] < vtr[i]) {
                vtr[st.back()] = vtr[i];
                st.pop_back();
            }
            
            st.push_back(i);
        }  
        
        for(auto it = st.begin(); it != st.end(); it++) {
            vtr[*it] = 0;
        }
        
        return vtr;
    }
};
