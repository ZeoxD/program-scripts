#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        if(n&1) {
            for(int i=0; i<n; i++) {
                if(i==n/2) s+='1';
                else s+='0';
            }
        }
        else {
            for(int i=0; i<n; i++) {
                if(i==0||i==n-1) s+='1';
                else s+='0';
            }
        }
        cout<<s<<endl;
    }
}
