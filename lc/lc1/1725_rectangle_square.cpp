#include<iostream>
#include<vector>
#define LVAL 999999990

using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> lsq(20,0);
        for(int i=0; i<rectangles.size(); i++) {
            if(rectangles.at(i).at(0)>LVAL) {
                lsq.at(rectangles.at(i).at(0)-LVAL < rectangles.at(i).at(1)-LVAL ? rectangles.at(i).at(0) - LVAL : rectangles.at(i).at(1) - LVAL )++;
            }
            else{
                lsq.at(rectangles.at(i).at(0) < rectangles.at(i).at(1) ? rectangles.at(i).at(0) : rectangles.at(i).at(1))++;
            }
        }
        int indexVal = lsq.at(0);
        for(int i=lsq.size()-1; i>=0; i--) {
            if (lsq.at(i) !=0)
            {
                indexVal = lsq.at(i);
                i=0;
            }
        }   

        return indexVal;
    }


};

