#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string reformatDate(string date) {
        
        vector<char> vtr;
        vector<char> vtrm;
        string ans;
        
        if(date.length() != 13) {
            vtr.push_back('0');
        }

        for(int i = 0; i < date.length(); i++) {
            if(date[i] >= '0' && date[i] <= '9') {
                vtr.push_back(date[i]);
            }
            else if(date[i] >= 'A' && date[i] <= 'z') {
                vtrm.push_back(date[i]);
            }
        }

        for(int i = 2; i<vtr.size(); i++) {
            ans += vtr[i];
        }
        
        ans += '-';
        
        string mon;
        for(int i = 2; i<vtrm.size(); i++) {
            mon += vtrm[i];
        }

        if(mon == "Jan") {
            ans += "01";
        }
        else if(mon == "Feb") {
            ans += "02";
        }
        else if(mon == "Mar") {
            ans += "03";
        }
        else if(mon == "Apr") {
            ans += "04";
        }
        else if(mon == "May") {
            ans += "05";
        }
        else if(mon == "Jun") {
            ans += "06";
        }
        else if(mon == "Jul") {
            ans += "07";
        }
        else if(mon == "Aug") {
            ans += "08";
        }
        else if(mon == "Sep") {
            ans += "09";
        }
        else if(mon == "Oct") {
            ans += "10";
        }
        else if(mon == "Nov") {
            ans += "11";
        }
        else if(mon == "Dec") {
            ans += "12";
        }

        ans += '-';

        for(int i = 0; i<2; i++) {
            ans += vtr[i];
        }
        
        return ans;
    }
    
};