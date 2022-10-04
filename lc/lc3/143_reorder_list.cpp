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
    void reorderList(ListNode* head) {
        auto s = head, f = head->next;
        while(f and f->next) {
            s = s->next;
            f = f->next->next;
        }

        auto second = s->next;
        s->next = nullptr;
        ListNode* prev = nullptr;
        while(second) {
            auto temp = second->next;
            second->next = prev;
            prev = second; second = temp;
        }

        while(prev) {
            auto n1 = head->next, n2 = prev->next;
            head->next = prev;
            prev->next = n1;
            head = n1; prev = n2;
        }


    }
};