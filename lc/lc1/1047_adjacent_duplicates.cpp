    #include<iostream>
    #include<string>

    using namespace std;
    
    class Solution {
    public:
        string removeDuplicates(string s) {
            
            int len = s.length();
            string snew;
            bool iterable = true;
            
            while(iterable) {

                iterable = false;
                cout<<s<<endl<<endl;
                for(int i = 0; i < len - 1; i++) {
                    
                    if(s[i] == s[i+1])
                    {
                        cout<<s[i]<<"=="<<s[i+1]<<endl;
                        i++;
                        iterable = true;
                    }
                    else {
                        cout<<s[i]<<endl;
                        snew += s[i]; 
                    }

                }
                cout<<s[len-1]<<endl;
                snew += s[len-1];
                s = snew;
                snew = "";
            }
            
            return s;
        }
    };