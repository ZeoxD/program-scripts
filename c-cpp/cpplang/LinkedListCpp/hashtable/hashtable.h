#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

#ifndef HASH_H
#define HASH_H

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
    
};



#endif