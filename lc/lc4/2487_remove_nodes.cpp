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
    ListNode* reverseNodes(ListNode* cur) {
        ListNode* prev = nullptr;
        while(cur) {
            auto temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        head = reverseNodes(head);
        ListNode *cur = head;
        while(cur->next) {
            if(cur->val > cur->next->val) {
                cur->next = cur->next->next;
            }
            else {
                cur = cur->next;
            }
        }
        
        return reverseNodes(head);
    }
};
