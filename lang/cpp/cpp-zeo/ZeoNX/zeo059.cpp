#include<iostream>
using namespace std;

int main()
{   
    unsigned long long num;
    int temp,count=0;
    cin>>num;

    int array[10];
    temp = num;
    while(num)
    {
        num = num / 10;
        count++;
    }
    
    num = temp;
    for(int i = count-1; i >= 0; i--)
    {   
        array[i] = num % 10;
        num = num / 10;
    }   

    int multiply;
    cout<<"With which number you want to multiply the array: ";
    cin>>multiply;
    for(int i = 0; i < count; i++)
    {
        array[i] = array[i] * multiply;
    }
    
    for(int i = 0; i < count; i++)
    {
        cout<<array[i];
    }
    
}