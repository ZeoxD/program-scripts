#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(1));
    int x;
    x = rand();
    cout << x;
}