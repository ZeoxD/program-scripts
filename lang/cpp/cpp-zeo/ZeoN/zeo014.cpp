#include <iostream>

main()
{   
    //three types of constants are : macros , const and enum...
    const int x = 5;
    std::cout << x << std::endl;
    enum {v = 50, y=10, z };
    std::cout << v << " " << y << " " << z;
}