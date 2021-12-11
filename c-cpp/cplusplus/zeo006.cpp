#include <iostream>
#include <vector>
#include <fstream>

int main()
{
    std::ifstream file;
    std::string filename;
    std::cin >> filename;
    file.open(filename);

    std::vector<int> data_base;
    int num;
    while (file >> num)
    {
        data_base.push_back(num);
    }
    
    for(int i: data_base)
    {
        std::cout << i << std::endl;
    }

    return 0;
}