#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();
        
        for(int i = 0; i < size; i++) {
            if(letters[i] > target) {
                return letters[i];
            }
        }
        
        return letters[0];
    }
};