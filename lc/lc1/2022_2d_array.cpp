#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int size = original.size();
        vector<int> svtr;
        vector<vector<int>> dvtr = {};
        int i = 0, temp = n;

        if( size == m*n )
        {
            while(i<size) {
                temp = n;
                while(temp--) {
                    svtr.push_back(original[i]);
                    ++i;
                }

                dvtr.push_back(svtr);
                svtr = {};
            }
        }

        return dvtr;
    }
};