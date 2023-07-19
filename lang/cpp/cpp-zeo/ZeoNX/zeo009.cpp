#include <iostream>
using namespace std;

int main()
{
    int x;
    bool search = false;
    
    cout << "Enter any number: ";
    cin >> x;
    if (x >= 1 && x <= 100)
    {
        search = true;
    }

    if (search) 
    {
        cout << "\nThe Element you entered is Right\n";
    }
    else 
    {
        cout << "\n Number is wrong\n";
    }

    cout << boolalpha << search << "\n";
}