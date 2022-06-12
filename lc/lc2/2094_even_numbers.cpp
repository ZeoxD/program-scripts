#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> hs;
        int size = digits.size();

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                for(int k = 0; k < size; k++) {
                    if(i == j || j == k || i == k) {
                        continue;
                    }
                    if(digits[i] == 0) {
                        continue;
                    }
                    if(digits[k] %2 != 0) {
                        continue;
                    }

                    hs.insert((digits[i] * 100) + (digits[j] * 10) + digits[k]);
                }
            }
        }

        vector<int> vtr;

        for(const auto &h: hs) {
            vtr.push_back(h);
        }

        return vtr;

    }
};