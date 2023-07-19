
#ifndef HASH_H
#define HASH_H

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class hashTable
{
private:
    static const int tableSize = 10;

    typedef struct item
    {
        string name;
        int id;
        item* next;
    }* itemPtr;

    itemPtr HashMap[tableSize];
    
public:
    hashTable();
    int fhash(string key);
    void AddItem(string name, int id);
    int IndexedItemsCount(int index);
    void PrintMap(); 
    int PrintIndexedItems(int index);
};



#endif