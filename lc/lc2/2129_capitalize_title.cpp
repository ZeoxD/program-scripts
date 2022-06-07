#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        if(title[0]>=97 && title[0] <= 122) {
            title[0] = title[0] - 32;
        }

        int size = title.size();

        for(int i = 1; i < size; i++) {
            if( title[i-1] == 32 && (title[i]>=97 && title[i]<=122)) {
                title[i] = title[i] - 32;
            }
            else if(title[i] >= 65 && title[i] <= 90) {
                title[i] = title[i] + 32;
            }

        }

        return title;
    }
};