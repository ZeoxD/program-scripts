#include"LinkedList.h"

int main() {
    LinkedList list;
    list.AddNode(5);
    list.AddNode(7);
    list.AddNode(110);
    list.PrintList();
    list.DeleteNode(5);
    list.PrintList();

    return 0; 
}