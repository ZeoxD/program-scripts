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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *iter = head, *left = head, *right = head;
        
        while(iter) {
            if(--k >= 0) {
                left = iter;
            }
            else {
                right = right->next;   
            }
            iter = iter->next;
        }
        
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        
        return head;
    }
};
