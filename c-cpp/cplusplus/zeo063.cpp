#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main()
{
    int x;
    char y;
    string z;

    cin>>x;
    cin>>y;
    cin>>z;


    vector<string> billu { "hi ", " my name ", "Is Himanshu"  } ;

    for(char * t: { "hello", "world ",  "how "," are", "you "})
    {
        billu.push_back( to_string(t) );
    }


    for( char * c:billu)
    {
        cout<<c;
    }
    if (x == 1)
    {
        cout<<"Works"<<endl;
    }

    if (y == '1')
    {


        cout<<"Works for char"<<endl;
    }

    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] == '1')
        {
            cout<<"Works for string";
        }
    }   
    
}