/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto lp1 = headA, lp2 = headB;
        while(lp1!=lp2) {
            if(lp1) lp1 = lp1->next; else lp1 = headB;
            if(lp2) lp2 = lp2->next; else lp2 = headA;
        }
        return lp1;
    }
};