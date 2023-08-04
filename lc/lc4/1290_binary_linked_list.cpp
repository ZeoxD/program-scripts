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
    int getDecimalValue(ListNode* head) {
        if(!head->next) {
            if(head->val) {
                return 1;
            }
            else {
                return 0;
            }
        }
        
        int val = 0;
        
        while(head) {
            val += head->val;
            if(head->next) {
                val = val*2;
            }
            head = head->next;
        }
        
        return val;
    }
};


