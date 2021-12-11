#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
    float a;
    int b;
    cout << "The Following program round off the numbers: ";
    cin >> a;

    b = (int)a;
    a = a - b;
    
    if (a >= 0.5)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }

    b = b + a;
    
    cout << "Your Number is rounded off successfully \n" << b << std::endl;
}