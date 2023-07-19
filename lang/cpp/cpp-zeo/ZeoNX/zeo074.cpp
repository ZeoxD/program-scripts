#include<iostream>
#include<vector>
#include<string>

int main() {

    std::vector<std::string> data;
    
    data.push_back("lololol");
    data.push_back("trollolol");
    
    int i=0;
    while(i<data.size()) {
        
        std::cout<<data[i];
        i++;
    }
}