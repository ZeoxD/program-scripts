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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !k) return head;
        auto tail = head;
        int count = 1;
        while(tail->next) {
            tail = tail->next;
            ++count;
        }      
        if(count == 1) return head;
        k = k % count; 
        if(!k) return head;
        count -= k+1;
        auto mid = head;
        while(count--) mid = mid->next;
        auto new_head = mid->next;
        mid->next = nullptr;
        tail->next = head;

        return new_head;
    }
};