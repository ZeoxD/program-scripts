#include <iostream>
int print_array(int array[],int);

main()
{
    const int SIZE = 6;
    int arr[SIZE];
    
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> arr[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    print_array(arr, SIZE);
    std::cin.clear();
    std::cin.ignore(1000,'\n');

}

int print_array(int array[], int size)
{
    for(int j = 0; j < size; j++)
    {
        std::cout << array[j] << "\t";

    }

}