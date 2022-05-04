#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        enum value { box = 0, units = 1 };
        map<int, int> um;

        for(int i = 0; i<boxTypes.size(); i++) {
            um[boxTypes[i][units]] += boxTypes[i][box];
        }

        int res = 0;
        
        for(auto it = um.rbegin(); it!=um.rend(); it++) {
            
            cout<<it->second<<" "<<it->first<<endl;
        }

        for(auto it = um.rbegin(); it != um.rend(); it++) {
            if(truckSize >= it->second) {
                res += it->second * it->first;
                truckSize = truckSize - it->second;
            }
            else { 
                res += truckSize * it->first;
                break;
            }
        }

        return res;
    }
};