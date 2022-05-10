#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        if(s.size() == 0)
        {
            return;
        }
        reverseString();

    }
};

int main(){
    Solution sl;
    vector<char> vtr = {'h', 'e', 'l'};
    sl.reverseString(vtr);
}