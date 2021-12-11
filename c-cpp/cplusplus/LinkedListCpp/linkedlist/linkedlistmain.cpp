#include"linkedlist.cpp"

int main()
{
    LinkedList list;
    list.AddNode(5);
    list.DeleteNode(5);
    list.PrintNode();
    list.AddNode(4);
    list.AddNode(6);
    list.PrintNode();
    list.DeleteNode(4);
    list.PrintNode();
    return 0;
}