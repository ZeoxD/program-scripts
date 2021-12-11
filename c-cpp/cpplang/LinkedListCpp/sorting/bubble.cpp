#include<iostream>

using namespace std;

void swap(int *ar1, int *ar2)
{

    cout<<ar1<<endl<<ar2<<endl<<*ar1<<endl<<*ar2<<endl;
    int temp = *ar1;
    *ar1 = *ar2;
    *ar2 = temp;
}

int main()
{
    int arr[] = {2,3,4};

    swap(&arr[2],&arr[1]);
    int i=0;
    while (i<3)
    {
        cout<<"Array index values: "<<arr[i]<<endl;
        i++;
    }
    
}