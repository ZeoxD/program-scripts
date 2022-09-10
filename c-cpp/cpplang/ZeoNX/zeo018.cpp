#include <iostream>
#include <string>

main()
{
    std::string fullName;
    std::cout << "Enter your Name: ";
    getline(std::cin, fullName);

    fullName.replace(fullName.find("shraddha"), 8,"vaishnavi");

    std::cout << "Your name is: " << fullName<<std::endl;
}