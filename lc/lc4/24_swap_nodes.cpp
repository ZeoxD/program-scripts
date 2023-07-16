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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* dummy = new ListNode();
        ListNode* tail;
        ListNode* nextPair;
        ListNode* prev = dummy;
        
        while(head && head->next) {
            //save pointer
            tail = head->next;
            nextPair = tail->next;
            
            //reverse pairs
            tail->next = head;
            prev->next = tail;
            head->next = nextPair;
  
            //update pointers
            prev = head;
            head = nextPair;
        }
        
        return dummy->next;
    }
};
