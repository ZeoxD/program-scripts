#include <iostream>

main()
{
    auto x = 22.l;
    std::cin >> x;
    std::cout << x << std::endl;
    int y;
    std::cin >> y;
    std::cout << std::hex << y <<std::endl;
    std::cout << std::oct << y <<std::endl;
}