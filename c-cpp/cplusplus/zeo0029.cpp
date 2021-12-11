#include <iostream>
using namespace std;

int main() {
	
	int cases, num, savenum,add;
	cin>>cases;
	int total[cases];
	for (int i=1;i<=cases;i++)
	{
	    add=0;
	    
	    cin>>num;
	    
	    while(num!=0)
	    {
	        savenum = num % 10;
	        num = num / 10;
	        add += savenum;
	        total[i-1] = add;
	    }
	    
	}
	for(int i=0;i<cases;i++)
	{
	    cout<<total[i]<<endl;
	}
	
	return 0;
}
