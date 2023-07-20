#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *fast = head, *slow = head;
        int mv;
        
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        } 
        
        ListNode *prev = nullptr;
        while(slow) {
            ListNode *temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        
        while(prev) {
            mv = max(mv, prev->val + head->val);
            prev = prev->next;
            head = head->next;
        }
        
        return mv;        
    }
};
