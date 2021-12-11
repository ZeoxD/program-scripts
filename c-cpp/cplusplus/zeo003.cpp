#include<iostream>
#include<vector>

void print_arr(int data[],int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << std::endl;
    }
    
}

int main()
{
    int data[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(data)/sizeof(data[0]);
    print_arr(data,size);
}