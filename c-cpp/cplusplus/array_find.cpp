#include<vector>
#include<iostream>
#include<set>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    set<int> st;

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i!=j && abs(v[i]-v[j]) <= k) {
                st.insert(v[j]);
            }
        }
    }
    cout<<v.size()-st.size()<<endl;
    return 0;

}