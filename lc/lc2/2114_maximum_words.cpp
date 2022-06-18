#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxc = 0;
        int count = 0;

        for(auto str: sentences) {
            int size = str.size();
            for(int i = 0; i < size; i++) {
                if(str[i] == ' ') {
                    count++;
                }
            }
            maxc = max(maxc, count);
            count = 0;
        }

        return maxc + 1;
    }
};