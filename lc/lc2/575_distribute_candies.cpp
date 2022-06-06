#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        unordered_map<int, int> um;

        for(auto c: candyType) {
            um[c] = 1;
        }
        return um.size() < size/2 ? um.size() : size/2;
    }   
};