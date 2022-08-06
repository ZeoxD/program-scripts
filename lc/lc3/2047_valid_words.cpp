#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countValidWords(string sentence) {
        vector<string> vtr;
        string str = " ";
        for(auto c: sentence) {
            if(c == ' ' && str.length() > 1) {
                str += " ";
                vtr.push_back(str);
                str = " ";
            }
            else if(c != ' ') str += c;
        }
        if(str.length() > 1) {
            str += " ";
            vtr.push_back(str);
        }
        
        int count = 0; bool flag; int hyp;
        for(auto v: vtr) {
            cout<<v<<endl;
            hyp = 0;
            flag = false;
            for(int i = 0; i < v.size(); i++) {
                if((v[i] == '!' || v[i] == '.' || v[i] == ',') && v[i+1] != ' ') {
                    flag = true;
                    break;
                }
                else if(v[i] == '-' && (v[i-1] == ' ' || v[i+1] == ' ') ) {
                    flag = true;
                    break;
                }
                else if((v[i] >= 48 && v[i] <=57) || (v[i] >= 65 && v[i] <= 90)) {
                    flag = true;
                    break;
                }
                
                if(v[i]=='-') ++hyp;
            }
            if(!flag && hyp<2) {
                ++count;
            }
        }

        return count;
    }
};