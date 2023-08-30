/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* dfs(Node *cur) {
        Node* prev = nullptr;
        while(cur) {
            prev = cur;
            if(cur->child) {
                Node* tail = dfs(cur->child);
                tail->next = cur->next;
                if(cur->next) {
                    cur->next->prev = tail;      
                }
                
                //change level pointers
                cur->next = cur->child;
                cur->child->prev = cur;
                cur->child = nullptr;
                
                //reset main pointers
                cur = tail->next;
                prev = tail;
            }
            else {
                cur = cur->next;
            }
        }
        return prev;
    }
    
    Node* flatten(Node* head) {
        dfs(head);
        return head;
    }
};
