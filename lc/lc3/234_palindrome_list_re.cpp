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
    bool isPalindrome(ListNode* head) {
        auto f = head, s = head;
        while(f and f->next) {
            s = s->next;
            f = f->next->next;
        }
        ListNode* c = NULL;
        while(s) {
            auto temp = s->next;
            s->next = c; c = s; s = temp;
        }
        while(c) {
            if(c->val != head->val) {
                return false;
            }
            c = c->next;
            head = head->next;
        }
        return true;
    }
};