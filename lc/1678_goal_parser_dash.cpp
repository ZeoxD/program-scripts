    #include<iostream>
    #include<string>

    using namespace std;

    class Solution {
    public:
        string interpret(string command) {
            int len = command.length();
            for(int i = 0; i < len; i++) {
                if(command[i] == '(' && command[++i] == ')') {
                    command[i] = 'o';
                }
                else {
                    
                }
            }
        }
    };