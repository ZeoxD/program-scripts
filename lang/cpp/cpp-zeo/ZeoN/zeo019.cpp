#include <iostream>
#include <string>

main()
{
    std::string fullName;
    std::cout << "Enter your Name: ";
    getline(std::cin, fullName);    

    fullName.replace(fullName.find_first_of("shraddha"), fullName.find_last_of("shraddha"),"vaishnavi");

    std::cout << "Your name is: " << fullName<<std::endl;
}