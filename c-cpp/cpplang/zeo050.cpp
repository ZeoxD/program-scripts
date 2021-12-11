#include<iostream>
using namespace std;

int match_count(int num)
{     
    switch(num)
    {
        case 0: return 6;
                break;

        case 1: return 2;
                break;

        case 2: return 5;
                break;

        case 3: return 5;
                break;

        case 4: return 4;
                break;

        case 5: return 5;
                break;

        case 6: return 6;
                break;

        case 7: return 3;
                break;

        case 8: return 7;
                break;

        case 9: return 6;
                break;


    }
}

int main()
{
    int cases;
    cin>>cases;
    int Anum,Bnum,tot_matches=0;

    while(cases--)
    {   
        tot_matches = 0;
        cin>>Anum;
        cin>>Bnum;

        Anum = Anum + Bnum;

        while(Anum)
        {
            Bnum = Anum % 10;
            Anum = Anum / 10;
            
            tot_matches += match_count(Bnum);           
        }
        
        cout<<tot_matches<<endl;
    }    
}