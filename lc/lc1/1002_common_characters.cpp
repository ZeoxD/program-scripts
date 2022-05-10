#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       
        vector<int> vtr(122-96, 0);
        vector<int> vtrx(122-96, 0);
        vector<string> vch;

        for(int i = 0; i < words[0].size(); i++) {
            vtr[words[0][i]-'a']++;
        }

        
        for(auto &w: words) {
            for(int i = 0; i < w.size(); i++) {
                vtrx[w[i]-'a']++;
            }

            for(int i = 0 ; i< 26; i++) {
                if(vtrx[i] < vtr[i]) {
                    vtr[i] = vtrx[i];
                    vtrx[i] = 0;
                }
                else {
                    vtrx[i] = 0;
                }
            }
        }


        for(int i = 0; i < 26; i++) {
            string ch;
            while(vtr[i]>0) {

                ch += char(i+97);
                vch.push_back(ch);
                ch = "";

                vtr[i]--;
            }
        }

        return vch;
    }
};

