#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> umap;
        int size = rectangles.size();

        for(int i = 0; i < size; i++) {
            umap[min(rectangles[i][0], rectangles[i][1])]++;
        }

        int mv = 0;
        for(auto it = umap.begin(); it != umap.end(); it++) {
            if(mv < it->second) {
                mv = it->second;
            }
        }

        return mv;
    }
};