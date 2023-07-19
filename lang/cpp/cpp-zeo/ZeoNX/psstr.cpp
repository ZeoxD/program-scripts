#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1, s2;
    s1 = "Amit sahu";
    s2 = " A boy";
    if(s1[5] == " ") {
        cout<<s1.substr(5,s1.size());
    }
    else {
        cout<<s1+s2;
    }
}