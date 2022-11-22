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
    ListNode* deleteDuplicates(ListNode* head) {
        auto cur = head;
        if(!cur) return nullptr;
        while(cur->next) {
            if(cur->next->val == cur->val) {
                auto t = cur->next; 
                cur->next = t->next;
                delete t;
            }
            else {
                cur = cur->next;
            }
        }
        return head;
    }
};