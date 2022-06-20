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

        for(int i = 1; i < size-2; i++) {
            if(title[i-1] == 32 && title[i+2] == 32) {
                if(title[i] >= 65 && title[i] <=90) {
                    title[i] = title[i] + 32;
                }

            }

            if(title[i-1] == 32 && title[i+1] == 32) {
                if(title[i] >= 65 && title[i] <= 90) {
                    title[i] = title[i] + 32;
                }
            }
        }

        if((title[0] >= 65 && title[0] <= 90) && (title[0+1] == 32) ) {
            title[0] = title[0] + 32;
        }
        else if((title[size-1] >= 65 && title[size-1] <= 90) && (title[size-1-1] == 32) ) {
            title[size-1] = title[size-1] + 32;
        }

        return title;
    }
};