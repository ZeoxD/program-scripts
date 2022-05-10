#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
      
        string sbit;
        string gbit;

        while(start > 0) {
            
            sbit += char( (start%2) + 48 );
            start = start / 2;
        }

        while(goal > 0) {
            gbit += char ( (goal%2) + 48 );
            goal = goal / 2;
        }

        if(sbit.length()>gbit.length()) {
            int loop = sbit.length() - gbit.length();
            while(loop--) {
                gbit += '0';
            }
        }
        else if(sbit.length()<gbit.length()) {
            int loop = gbit.length() - sbit.length();
            while(loop--) {
                sbit += '0';
            }
        }

        int count = 0;

        cout<<sbit<<" "<<gbit;

        for(int i = 0; i<sbit.length(); i++) {
            if(sbit[i] != gbit[i]) {
                count++;
            }
        }

        return count;
    }
};