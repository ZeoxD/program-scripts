#include<iostream>
#include<vector>

main()
{
    std::vector<std::vector<int>> vect = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; 

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        std::cout << vect[i][j] << "   ";
    
        }
        std::cout << "\n\n";
    }                

}