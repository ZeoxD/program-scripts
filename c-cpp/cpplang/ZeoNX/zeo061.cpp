#include<iostream>
using namespace std;

int main()
{
    unsigned short int temp,cases,num,save,pal;
    cin>>cases;
    while(cases--)
    {   
        cin>>num;
        temp = num;
        pal = 0;
        save = 0;
        while(num)
        {
            save = num % 10;
            num = num / 10;
            pal = pal * 10 + save;

        }

        if (temp == pal)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"losses"<<endl;
        }

        
    }

}