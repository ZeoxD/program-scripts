#include<iostream>
#include<cstdlib>
#include<string>

#include"hashtable.cpp"

using namespace std;

int main()
{
    hashTable hashObj;
    hashObj.AddItem("Meow", 7265);
    hashObj.AddItem("alex", 7265);
    hashObj.AddItem("nona", 7265);
    hashObj.AddItem("shanks", 7265);
    hashObj.AddItem("sorrow", 7265);
    hashObj.AddItem("dream", 7265);
    hashObj.PrintMap();
    return 0;
}
