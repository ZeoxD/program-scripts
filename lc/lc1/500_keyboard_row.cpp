#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> us1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> us2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> us3 = {'z','x','c','v','b','n','m'};

        unordered_set<char> tempset;
        vector<string> vtr;

        for(auto word: words) {

            if(us1.find(tolower(word[0])) != us1.end()) {
                tempset = us1;
            }
            else if (us2.find(tolower(word[0])) != us1.end()) {
                tempset = us2;
            }
            else {
                tempset = us3;
            }

            bool flag = false;

            for(auto ch: word) {
                if(tempset.find(tolower(ch)) == tempset.end()) {
                    flag = true;
                    break;
                }
            }

            if(!flag) {
                vtr.push_back(word);
            }
            
        }

        return vtr;
    }
};