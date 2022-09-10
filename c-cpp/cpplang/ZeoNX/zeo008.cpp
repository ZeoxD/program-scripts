#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> mamama = {
        {1,2},
        {3,4},
        {5,6}
    };

    for(int r = 0 ; r < 3 ; r++)
    {
        for (int c = 0 ; c < 2; c++)
        {
            std::cout << mamama[r][c] << "\t";
        }
        std::cout << std::endl;
        
    }
    return 0;
}
