#include <iostream>

main()
{
    float a = 10.0 / 3;
    double b = 10.0 / 3;
    long double c = 10.0 / 3;
    a = a * 1000000;
    b = b * 10000000000000;
    c = c * 10000000000000000;

    std::cout << __FLT_DIG__ << " " << a << "\n"; 
    std::cout << __DBL_DIG__ << " " << b << "\n"; 
    std::cout << __LDBL_DIG__ << " " << c << "\n";    

}