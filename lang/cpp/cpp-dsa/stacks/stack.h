#ifndef STACK_H
#define STACK_H

#include<string>
using namespace std;

class Stacks{

    private:

        // typedef struct item{
        //     string name;
        //     int id;
        //     item* prev;
        // } *itemPtr;

        struct item{
            string name;
            int id;
            item* prev;
        };

        item* stackPtr;
        
    public:

        Stacks();   //constructor 
        void Push(string name, int id);
        // void ReadItem(itemPtr r);
        void ReadItem(item* r);
        void Pop();
        void PrintStack();
        ~Stacks();  //Deconstructor
};

#endif