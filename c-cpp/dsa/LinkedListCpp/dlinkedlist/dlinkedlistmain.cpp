#include"dlinkedlist.cpp"

int main()
{
    DLinkedList dlist;
    dlist.AddDList(5);
    dlist.AddDList(6);
    dlist.AddDList(7);
    dlist.PrintForwardList();
    dlist.PrintBackwardList();
}