#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> res;

        int as = 0;
        int bs = 0;

        for(const auto &a: aliceSizes) {
            as += a;
        }

        for(const auto &b: bobSizes) {
            bs += b;
        }

        cout<<as<<" "<<bs<<endl;

        int diff = as>bs ? as - bs : bs - as;
        diff /= 2;
        cout<<"diff = "<<diff<<"\t";

        int smax = 0;
        bool flag = false;
        for(int i = 0; i<aliceSizes.size(); i++) {
            for(int j = 0; j<bobSizes.size(); j++) {
                if(as>bs && abs(aliceSizes[i]-bobSizes[j]) == diff && aliceSizes[i] > bobSizes[j] ) {
                        smax = max(smax, aliceSizes[i]+bobSizes[j]);
                }
                else if(as<bs && abs(aliceSizes[i]-bobSizes[j]) == diff && aliceSizes[i] < bobSizes[j] ) {
                        smax = max(smax, aliceSizes[i]+bobSizes[j]);
                }
            }
        }
        cout<<"smax: "<<smax;

        for(int i = 0; i<aliceSizes.size(); i++) {
            for(int j = 0; j<bobSizes.size(); j++) {
                if( abs(aliceSizes[i]-bobSizes[j]) == diff && aliceSizes[i] + bobSizes[j] == smax) {
                    res.push_back(aliceSizes[i]);
                    res.push_back(bobSizes[j]);
                    flag = true;
                    break;
                }
                
            }

            if (flag) {
                break;
            }
        }        

        return res;

    }
};


// 1 1 = 2
// 2 2 = 4
// diff = 2 / 2 = 1 max (1, 2)

