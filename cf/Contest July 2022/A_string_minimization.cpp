#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<int> vtr(n);
        string s;

        for(int i = 0; i < m; i++) {
            s += 'B';
        }

        for(int i = 0; i < n; i++) {
            cin>>vtr[i];
        }

        set<int> st;

        for(int i = 0; i < n; i++) {
            if( st.find(vtr[i]) != st.end() ) {
                if( ((m+1) - vtr[i] -1) < (vtr[i]-1)) {
                    s[ (m+1) - vtr[i] -1] = 'A';
                }
                else {
                    s[vtr[i]-1] = 'A';
                }


            }
            else {
                if( ((m+1) - vtr[i] -1) < (vtr[i]-1)) {
                    s[ (m+1) - vtr[i] -1] = 'A';
                }
                else {
                    s[vtr[i]-1] = 'A';
                }
                st.insert(vtr[i]);
            }

        }

        cout<<s<<endl;
    }
}