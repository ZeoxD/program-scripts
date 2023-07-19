struct Node {
    int value;
    struct Node* next;
};

class Solution 
{
public:  
    struct Node* reverse(struct Node* first, struct Node* last)
    {
        struct Node* prev = last;    
        while ( first != last )
        {
            auto tmp = first->next;
            first->next = prev;
            prev = first;
            first = tmp;
        }      
        return prev;
    }
    struct Node* ReverseKNodes(struct Node* head, int k) {
        struct Node *node = head;
        for (int i=0; i < k; ++i)
        {
            if (!node) {
                auto new_head = reverse(head, node);
                return new_head;
            }
            node = node->next;
        }
        auto new_head = reverse(head, node);
        head->next = ReverseKNodes(node, k);
        return new_head;
    }
};