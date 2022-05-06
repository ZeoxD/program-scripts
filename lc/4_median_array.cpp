#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<double> res;
        
        int len1 = nums1.size();
        int len2 = nums2.size();


        if(len1 != 0) {

            if(len1 % 2 == 1) {
                res.push_back(nums1[(len1-1)/2]);
            }
            else {
                res.push_back( (nums1[(len1-1)/2] + nums1[((len1-1)/2) + 1]) / 2.0);
            }

        }
        
        if(len2 != 0) {

            if(len2 % 2 == 1) {
                res.push_back(nums2[(len2-1)/2]);
            }
            else {
                res.push_back( (nums2[(len2-1)/2] + nums2[((len2-1)/2) + 1]) / 2.0);
            }

        }

        if(res.size() == 1) {
            return res[0] / 1.0;
        }

        return (res[0] + res[1]) / 2.0 ;
    }
};

// 2 3 4 5 6 7
