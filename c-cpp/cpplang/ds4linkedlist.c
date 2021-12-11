
#include<stdio.h>
#include <stdlib.h>


// creating node
struct node
{
    int data;
    struct node* next;


};


struct node* front = 0;
struct node* rear = 0;


// display
void display()
{
    struct node* temp;
    if(front == 0 && rear ==0)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=front;
        printf("list is :\n");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
        
    }
    return;
    
}


// inserting data
void insert()
{
    int x;
    printf("enter data\n");
    scanf("%d",&x);
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;


    if(front == 0 && rear == 0)
    {
        front = newnode;
        rear = newnode;


    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }


    display();
    


}
// deleting first 
void delete()
{
    if(front==0 && rear == 0)
    {
        printf("list is empty\n");


    }
    struct node* temp=front;
    front=front->next;
    free(temp);



}
// top element
void peek()
{
   if(front==0 && rear ==0)
   {
       printf("empty :\n");
       return;
   }
   else
   {
       printf("front is :\n");
       printf("%d\n",front->data);
   }
   
}



int main()
{
    int choice;


    while(1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.peek\n");
        printf("5.exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
            case 5:
            exit(1);
            default:
            printf("wrong choice\n");

        }

    }

}