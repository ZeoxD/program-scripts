#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        for(int i = 0; i<word.length(); i++) {
            if(word[i] == ch) {
                index = i;
                break;
            }
        }      
        if(index == -1) {
            return word;
        }
        string rev;
        for(int i = index; i >= 0; i--) {
            rev += word[i];
        }
        
        for(int i = index+1; i < word.length(); i++) {
            rev += word[i];
        }

        return rev;
    }
};