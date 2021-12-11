#include"stack.h"

#include<cstdlib>
#include<iostream>
using namespace std;

Stacks::Stacks()
{
    stackPtr = NULL;
}

Stacks::~Stacks()
{
    // itemPtr p1;
    // itemPtr p2;

    item* p1;
    item* p2;

    p1 = stackPtr;
    while (stackPtr != NULL)
    {
        p2 = p1;
        p1 = p1->prev;
        p2->prev = NULL;
        delete p2;
    }

}

void Stacks::Push(string nameval)
{
    item* n = new item;
    n->name = nameval;
    // n->id = idval;
    cout<<"not inside any statement";

    if (stackPtr != NULL)
    {
        n->prev = stackPtr;
        stackPtr = n;
        cout<<"inside if statement";
    }
    else
    {
        stackPtr = n;
        stackPtr->prev = NULL;
        cout<<"inside else statement";
    }
    
}

// void Stacks::ReadItem(itemPtr r)
void Stacks::ReadItem(item* r)
{
    if (r != NULL)
    {
        cout << "\n_________________\n" << r->name <<endl << r->id <<endl;
    }
    else
    {
        cout<<"There is nothing to print in the stack"<<endl;
    }
  
}

void Stacks::Pop()
{
    if (stackPtr != NULL)
    {
        // itemPtr p = stackPtr;
        item* p = stackPtr;
        stackPtr = stackPtr->prev;
        ReadItem(p);
        p->prev = NULL;
        delete p;       
    }
    else
    {
        cout<<"There is nothing in the stack\n";
    }
     
}

void Stacks::PrintStack()
{
    // itemPtr p = stackPtr;
    item* p = stackPtr;
    while(stackPtr != NULL)
    {
        ReadItem(p);
        p = p->prev;
    }
    delete p;

}