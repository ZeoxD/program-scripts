#include<iostream>
#include<array>

int main()
{   int i;
    std::array<int, 5> value;
    std::cout << "Enter the Vaules: ";
    for (i = 0; i < 5; i++)
    {
        std::cin >> value[i];
    }
    std::cout << "The Vaules are: \n";
    for (i = 0; i < 5; i++)
    {
        std::cout << value[i] << std::endl;
    }   
}