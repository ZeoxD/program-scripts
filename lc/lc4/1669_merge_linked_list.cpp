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
    ListNode* findTail(ListNode* tail) {
        while(tail->next) {
            tail = tail->next;
        }
        return tail;
    }
    
    ListNode* findNode(ListNode* cur, int val) {
        while(--val) {
            cur = cur->next;
        }
        return cur;
    }
    
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tail2 = list2;
        b = b - a + 1;
        
        auto iter = findNode(list1, a);
        auto temp = findNode(iter->next, b);
        auto tail = findTail(list2);
        
        iter->next = list2;
        tail->next = temp->next;
        
        return list1;        
    }
};
