#include<cstdlib>
#include<iostream>

#include"dlinkedlist.h"

using namespace std;

DLinkedList::DLinkedList()
{
    head = NULL;
    tail = NULL;
    temp = NULL;

}

void DLinkedList::AddDList(int addData)
{
    nodePtr n = new node;
    n->data = addData;

    if(head != NULL)
    {   
        tail->next = n;

        while (tail->next != NULL)
        {
            n->prev = tail;
            tail = tail->next;
        }
       
    }

    else
    {
        head = n;
        tail = n;
        n->prev = NULL;
    }
   
}

void DLinkedList::PrintForwardList()
{
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void DLinkedList::PrintBackwardList()
{
    temp = tail;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->prev;
    }
}