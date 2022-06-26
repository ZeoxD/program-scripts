#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> us;        

        for(auto a: arr) {
            if(us.count(2*a) == 1 || (a%2==0) && us.count(a/2) == 1) {
                return true;
            }

            us.insert(a);
        }

        return false;
    }
};