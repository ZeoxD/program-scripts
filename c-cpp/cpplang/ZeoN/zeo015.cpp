#include <iostream>
#include <cmath>
using namespace std;

main()
{   
    int y = round(4.458); //used to round off the values, works same as ceil() function
    cout << y <<endl;

    int z = fmod(4.458,2.221); //remainder can be used but fmod is better as remainder truncate the vaules and then equate it.
    cout << z <<endl;

    int za = fmax(4.458,2.221);  // fmin is used to get the minimum values of the two
    cout << za <<endl;

    int zb = ceil(4.458);  //floor for bottom values, trunc can be used but it chops off the values after decimal
    cout << zb <<endl;
}