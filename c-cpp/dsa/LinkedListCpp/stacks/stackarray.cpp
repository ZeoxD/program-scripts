#include<iostream>
#include<cstdlib>
#define SIZE 10
int A[SIZE];
int top = -1;

using namespace std;

bool isempty()
{
    if (top == -1) return true;
    else return false;
}

void Push(int value)
{
    if (top == SIZE-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        A[top]= value;
    }    
}

void Pop()
{
    if (isempty()) cout<<"The stack is empty"<<endl;
    else 
    {   
        cout<<"Element popped out of the stack is\n_____\n"<<A[top]<<endl<<"_____\n";
        top--;
    }    
}

void displayTop()
{
    if(isempty()) cout<<"There is nothing to display";
    else cout<<"Element at the top is\n_____\n"<<A[top]<<endl<<"_____\n";
}

void displayStack()
{
    if(isempty()) cout<<"There is nothing to display in the stack";
    else 
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout<<"_____\n"<<A[i]<<endl<<"_____\n";
        }        
    }
}

int main()
{
    Push(3);
    Push(4);
    Push(5);
    displayStack();
    Pop();
    displayTop();
}

