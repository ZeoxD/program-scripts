#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool arr[26];

        for(int i = 0; i<26; i++) {
            arr[i] = false;
        }

        for(auto &b: brokenLetters) {
                arr[int(b)-97] = true;
        }


        int count = 0, res = 0, tot = 1;

        for(int i = 0; i < text.length(); i++) {
            if(text[i] == ' ') {
                tot++;
                if(count) {
                    res++;
                    count = 0;
                }

            }
            else {
                if( arr[int(text[i])-97] == true ) {
                    count++;
                }
            }
        }
        
        if(count) {
            res++;
        }

        return tot-res;
    }
};
