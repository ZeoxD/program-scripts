#include<iostream>
#include<string>

using namespace std;

template <typename T>

void multiply (T &a, T &b)
{
    T sum;
    sum = a + b;
    cout<<sum<<endl;

}

int main()
{
    string pass;
    char condition;

    do
    {           
        cout<<"What do you want to pass? Type in."<<endl;
        cout<<"1. String \n2. Numbers \n";
        cin>>pass;

        if ((pass == "Numbers") || (pass == "numbers") || (pass == "Number") || (pass == "number") )
        { 
        int num1, num2;
        cin>>num1>>num2;
        multiply(num1,num2);
        }
        else if(pass == "String" || pass == "string" )
        {
        string A, B;
        cin>>A>>B;
        multiply(A,B);
        }

        fflush(stdin);        
        cout<<"Do you want to choose again? [y/n]: ";
        string A;
        cin>>A; 
        cout<<A<<endl;
        cin>>condition;

    } while (condition == 'y' || condition == 'Y');

    cout<<"Back to Main Function";
}
