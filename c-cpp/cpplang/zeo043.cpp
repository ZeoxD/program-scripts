#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    int bases, squares;

    while (cases--)   
    {
        cin >> bases;

        squares = bases * bases;
        squares = squares - bases;
        squares = squares / 2;

        if (bases % 2 == 0)
        {
            squares = squares - 2;
            squares = squares/4;
        }
        else
        {
            squares = squares - (bases - 1) - 2;
            squares = squares/4;
        }
        
        cout<<squares<<endl;

    }
    
}