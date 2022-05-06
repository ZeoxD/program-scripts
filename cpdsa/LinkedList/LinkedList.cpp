#include"LinkedList.h"
#include<iostream>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void LinkedList::AddNode(int addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL) {
        curr = head;
        while(curr->next!=NULL) {
            curr = curr->next;
        }
        curr->next = n;
    }
    else {
        head = n;
    }
}

void LinkedList::DeleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr!=NULL && curr->data!=delData) {
        temp = curr;
        curr = curr->next;
    }
    if(curr==NULL) {
        cout<<"The value "<<delData<<" was not found.";
    }
    else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head) {
            head = head->next;
            temp = head;
        }
        delete delPtr;
        cout<<"The value "<<delData<<" was deleted.";
    }
}

void LinkedList::PrintList() {
    curr = head;
    while(curr!=NULL) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}