#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string capitalizeTitle(string stitle) {
        string title = "";
        title += ' ';
        title += stitle;
        title += ' ';
        
        int size = title.length();
        int i = 0; 
        int j = i+1;

        while(i <= j && j < size) {
            if(title[j] != ' ') {
                ++j;
            }
            else if(title[i] == ' ' && title[j] == ' ' && j-i-1 >=3) {
                ++i;
                if(title[i] >= 97 && title[i] <= 122) {
                    title[i] = title[i] - 32;
                }
                ++i;
                while(i<=j) {
                    if(title[i] >= 65 && title[i] <= 90 ) {
                        title[i] = title[i] + 32;
                    }
                    ++i;
                }
                --i;
                ++j;
            }
            else if(title[i] == ' ' && title[i] == ' ' && j-i-1 <=2) {
                ++i;
                while(i<=j) {
                    if(title[i] >= 65 && title[i] <= 90) {
                        title[i] = title[i] + 32;

                    }
                    ++i;
                }
                --i;
                ++j;
            }
        }
        

        return title.substr(1,size-2);

    }
};