#include<iostream>
#include<fstream>
#include<vector>

int main()
{
    std::string filename;
    std::cin >> filename;
    std::ofstream file (filename, std::ios::app);
    if(file.is_open())
    {
        std::cout<<"File Opened Successfully\n";
    }
    else
    {
        std::cout<<"File Didn't Open";
    }
    
    std::vector<int> data_storage;
    data_storage.push_back(55);
    data_storage.push_back(56);
    data_storage.push_back(54);
    file << "hey";
    
    for(int name : data_storage ) 
    {
        file<<name<<std::endl;
    }

    file.close();

    return 0;
}