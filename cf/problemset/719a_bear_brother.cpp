#include<iostream>
using namespace std;

int main() {
	int a, b; cin>>a>>b;
	int c=1;
	while(a*3 <= b*2) {
		a*=3; b*=2;
		++c;
	}
	cout<<c<<endl;
}	
