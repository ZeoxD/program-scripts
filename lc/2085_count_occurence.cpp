#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m;

        for(auto &w: words1) {
            m[w]++;
        }

        for(auto &w: words2) {
            if(m[w]<2){
                --m[w];
            }
        }

        int count = 0;
        for(auto i = m.begin(); i != m.end(); i++) {
            if(i->second == 0) {  
                count++;
            }
        }

        return count;
    }
};