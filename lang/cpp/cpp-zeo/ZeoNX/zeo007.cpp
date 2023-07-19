#include<iostream>
#include<vector>
#include<fstream>

int main()
{
    std::ifstream file;
    std::string filename;
    std::cin >> filename;
    file.open(filename);

    std::string wholeline;
    while(getline(file, wholeline))
    {
    std::cout << wholeline << std::endl;
    }

    return 0;
}