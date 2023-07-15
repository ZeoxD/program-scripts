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
class Solution 
{
public:
    ListNode* reverse(ListNode* head, ListNode* tail)
    {
        ListNode* prev = tail;
        while(head != tail) {
            auto t = head->next;
            head->next = prev;
            prev = head;
            head = t;
        }
        return prev;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        auto node=head;
        for (int i=0; i < k; ++i)
        {
            if(!node) return head;
            node = node->next;
        }
        auto new_head = reverse( head, node);
        head->next = reverseKGroup(node, k);
        return new_head;
    }
};