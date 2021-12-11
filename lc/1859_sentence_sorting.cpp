#include<iostream>
#include<string>

using namespace std;

class Solution {
    public:
        string sortSentence(string s) {
            string arr[s.length()];
            int len = 0;
            for(int i =0; i<s.length(); i++)
            {
                if (s[i]!=' ')
                {
                    arr[len][i] = s[i];
                    
                }
                else
                {
                    len++;
                }            
            }
            
            return "string";
        }
};

int main()
{
    Solution s;
    s.sortSentence("world2 hello1");
}