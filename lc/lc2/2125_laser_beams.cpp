#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> beam;
        int rows = bank.size();
        int cols = bank[0].size();

        int count;
        for(int i = 0; i < rows; i++) {
            count = 0;
            for(int j = 0; j < cols; j++) {
                if(bank[i][j] == '1') {
                    count++;
                }
            }
            if(count) {
                beam.push_back(count);
            }

        }
        
        if(!beam.size()) {
            return 0;
        }

        count = 0;
        for(int i = 0; i<beam.size()-1; i++) {
            count += beam[i] * beam[i+1];
        }

        return count;

    }
};