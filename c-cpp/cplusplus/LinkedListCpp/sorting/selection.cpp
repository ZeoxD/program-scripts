#include<iostream>
#define SIZE 5

using namespace std;

int main()
{
    int arr[SIZE]= {4,2,8,1,6};

    for(int i=0; i<SIZE; i++)
    {
        cout<<"Array values are: "<<arr[i]<<endl;
    }

    for (int j = 0; j < SIZE - 1; j++)
    {
        int iMin = j;

        for(int i = j+1; i<SIZE; i++)
        {
            if (arr[i] < arr[iMin])
            {
                iMin = i;
            }    
        }

        if (iMin != j)
        {
            int temp = arr[j];
            arr[j] = arr[iMin];
            arr[iMin] = temp;
        }
        
    }

    cout<<"\n\nAfter Selection Sort: \n";

    for(int i=0; i<SIZE; i++)
    {
        cout<<"Array values are: "<<arr[i]<<endl;
    }



}