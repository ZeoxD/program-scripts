#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if( ( int(coordinates[0])-96 + int(coordinates[1])-48 ) % 2 != 0 ) {
            return true;
        }      
        else {
            return false;
        }
    }
};