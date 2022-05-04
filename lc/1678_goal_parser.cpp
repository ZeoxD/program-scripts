    #include<iostream>
    #include<string>

    using namespace std;

    class Solution {
    public:
        string interpret(string command) {
            string out;
            char chl;
            for(char ch: command) {
                if(ch != '(' && ch != ')') {
                    out += ch;
                }
                if(chl == '(' && ch == ')' ) {
                    out += 'o';
                }

                chl = ch;
            }

            return out;
        }
    };