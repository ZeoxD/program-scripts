#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> lnums(size1+size2);

        int l = 0; int r = 0; int i = 0;

        while(l<size1 && r<size2) {
            if(nums1[l] < nums2[r]) {
                lnums[i] = nums1[l];
                ++l;
                ++i;
            }
            else {
                lnums[i] = nums2[r];
                ++r;
                ++i;
            }

        }

        while(l<size1) {
            lnums[i] = nums1[l];
            ++l;
            ++i;
        }
        while(r<size2) {
            lnums[i] = nums2[r];
            ++r;
            ++i;
        }

        for(auto ln: lnums) {
            cout<<ln<<" ";
        }

        int mid =  ((size1 + size2) - 1) / 2;

        if((size1+size2) % 2 == 0) {
            return (lnums[mid] + lnums[mid+1]) / 2.0;
        }

        return lnums[mid] / 1.0;
    }
};