#include<iostream>
#include<cstdlib>
#include<string>

#include"hashtable.h"

using namespace std;

hashTable::hashTable()
{
    for(int i=0; i< tableSize; i++)
    {
        HashMap[i] = new item;
        HashMap[i]->name = "\0";
        HashMap[i]->id = -1;
        HashMap[i]->next = NULL;
    }

}

int hashTable::fhash(string key)
{
    int hashfx = 0;
    int index;

    for (int i = 0; i < key.length(); i++)
    {
        hashfx += (int)key[i];
    }

    index = hashfx % tableSize;
    return index;    
}

void hashTable::AddItem(string name, int id)
{
    int index = fhash(name);
    if (HashMap[index]->name == "\0")
    {
        HashMap[index]->name = name;
        HashMap[index]->id = id;       
    }

    else
    {
        itemPtr Ptr = HashMap[index];
        itemPtr n = new item;
        n->name = name;
        n->id = id;
        n->next = NULL;
        while(Ptr->next != NULL)
        {
            Ptr = Ptr->next;
        }
        Ptr->next = n;
    }
}