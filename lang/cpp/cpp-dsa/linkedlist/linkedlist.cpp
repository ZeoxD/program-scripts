#include<cstdlib>
#include<iostream>

#include"linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void LinkedList::AddNode(int addData) 
{
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if (head != NULL)
    {
        curr = head;
        
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }

    else
    {
        head = n;
    }

}

void LinkedList::DeleteNode(int delData)
{
    nodePtr delPtr = NULL;
    curr = head;
    temp = head;
    while (curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;        
    }
    if (curr == NULL)
    {
        cout<<delData<<"was not in the List"<<endl;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if (delPtr == head)
        {
            head = head->next;
        }
        delete delPtr;
        cout<<"The value "<<delData<<" has been deleted!"<<endl;

    }
    

}

void LinkedList::PrintNode() 
{
    curr = head;
    
    while (curr != NULL)
    {
        cout<< curr->data <<endl;
        curr = curr->next;
    }

}

