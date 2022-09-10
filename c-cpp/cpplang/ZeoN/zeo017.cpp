#include <iostream>
#include <string>

main()
{
    /*std::string fName;
    std::string lName;
    
    std::cout << "Enter the string: ";

    std::cin >> fName;
    std::cin >> lName;

    std::cout << fName + " " + lName <<std::endl;*/

    std::string fullName;
    std::cout << "Enter your full name: ";
    getline(std::cin,fullName);
    std::cout << fullName << std::endl;  
}