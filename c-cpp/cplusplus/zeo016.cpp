#include <iostream>
#include <string>

main()
{
    std::string social = "hello world";
    social = social + "!!!";
    std::cout << social << std::endl;
    std::cout << social.length() << std::endl;
}