#ifndef DLIST_H
#define DLIST_H

class DLinkedList{

    private:

        typedef struct node{
            int data;
            node* prev;
            node* next;

        }*nodePtr;

        nodePtr head;
        nodePtr tail;
        nodePtr temp;

    public:

        DLinkedList();
        void AddDList(int addData);
        void PrintForwardList();
        void PrintBackwardList();

};

#endif