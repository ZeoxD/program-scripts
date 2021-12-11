#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void display()
{
    struct Node *temp = head;
    printf("\nList is ==> ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void create()
{

    int ch = 1;
    int new = 1;
    struct Node *ptr, *nw;
    while (ch != 0)
    {
        printf("\nEnter item in list : ");
        nw = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &nw->data);
        nw->next = 0;
        if (head == NULL)
        {
            head = nw;
        }
        else
        {
            for (ptr = head; ptr->next != NULL; ptr = ptr->next)
                ;
            {
                ptr->next = nw;
            }
        }
        printf("\nDo you want to countinue 1/0\n");
        scanf("%d", &new);
        if ( new == 0)
        {
            ch = new;
        }
    }
}
void insert()
{
    int x;
    printf("enter data:\n");
    scanf("%d", &x);
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {

        head = newnode;
    }
    else
    {
        struct Node *temp;

        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void delete ()
{
    struct Node *temp = head;
    struct Node *nextnode;
    int pos;
    printf("enter position:\n");
    scanf("%d", &pos);
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. creation\n");

        printf("2. insertion at end\n");

        printf("3. deletion at position\n");

        printf("4. display the list \n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            insert();
            break;

        case 3:
            delete ();
            break;
        case 4:
            display();
            break;
        }
    }
}