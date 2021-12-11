#include <iostream>
#include <cmath>
using namespace std;

main()
{
    cout << -sqrt(-259) << endl;
    cout << pow(-99, 199) << endl;
    cout << INFINITY << endl;
    cout << NAN << endl;
    cout << remainder(10,3) << endl;
    double x = 9, y = 2;
    float value = trunc(x/y);
    double result = remainder(x, y);// output is -0.9 
    double result2 = fmod(x, y);// output is 1.2
    cout << endl << result << "   " << result2 << "   " << value << endl;
 
} 