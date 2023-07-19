#include <iostream>
#define A 12
using namespace std;
int pain();

main()
{
    #define B 15        
    cout<<A<<endl;
    cout<<B<<endl;
    pain();
}

int pain()
{
    cout<<B;
  
}