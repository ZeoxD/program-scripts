    #include<iostream>
    #include<string>

    using namespace std;

    class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string merge;
            int i = 0;
            int j = 0;
            while( i < word1.length() || j < word2.length() ) {
                if(i < word1.length() && j < word2.length()) {
                    merge += word1[i++];
                    merge += word2[j++];
                }
                else if( i < word1.length() ) {
                    merge += word1[i++];
                }
                else {
                    merge += word2[j++];
                }
            }
            

            return merge;
        }
    };