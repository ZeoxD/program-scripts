#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    string stream; 
    ifstream file;  

    file.open("wordssfile.txt");

    if (file) {
        cout<<"File Opened";
    }
    else
    {
        cout<<"Unable to open file";
    }
    
 
    while (file >> stream) {
        cout<<"\nDone"<<endl;
    }
    
    file.close();
    return 0;
}