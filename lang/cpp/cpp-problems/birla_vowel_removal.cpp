#include<bits/stdc++.h>
using namespace std;

string vowels(string str) {
  string new_str = "";
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      continue;
    }
    else {
      new_str += str[i];
    }
  }

  return new_str;
}

int main() {
  string s = "helloworld";
  cout<<(vowels(s));

  return 0;
}
