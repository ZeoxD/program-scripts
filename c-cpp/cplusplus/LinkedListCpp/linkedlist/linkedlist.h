#ifndef LIST_H
#define LIST_H


class LinkedList {
    private: 
     
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;


        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:

        LinkedList();
        void AddNode(int addData);
        void DeleteNode(int deleteData);
        void PrintNode();

};


#endif