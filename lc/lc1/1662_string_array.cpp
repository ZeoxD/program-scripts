#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        for(int i=1; i < word1.size() ; i++)
        {
            word1[0] = word1[0] + word1[i]; 
        }

        for(int i=1; i < word2.size() ; i++)
        {
            word2[0] = word2[0] + word2[i]; 
        }

        if(word1[0]==word2[0])
        {
            return true;
        }
        else return false;

    }
};

int main(){
    Solution s;
    vector <string> word1 = {"hello", "there", "how", "are", "you?"};
    vector <string> word2 = {"hello", "there", "how", "are", "you?"};
    cout<<s.arrayStringsAreEqual(word1, word2);
}