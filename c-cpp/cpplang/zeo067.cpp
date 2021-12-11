#include<iostream>
using namespace std;

int main()
{
    #ifndef PRINT
        #define PRINT 99
    #endif

    #ifdef PRINT
        cout<<PRINT;
    #endif
}