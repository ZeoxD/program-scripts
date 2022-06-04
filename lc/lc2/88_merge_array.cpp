#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int size = m+n;
        int i;
        for(i = size-1; i>=0 && m>0 && n>0;) {

            if(nums1[m-1] > nums2[n-1]) {
                nums1[i] = nums1[m-1];
                i--;
                m--;
            }
            else {
                nums1[i] = nums2[n-1];
                i--;
                n--;
            }
        }

        while(n>0) {
            nums1[i] = nums2[n-1];
            i--;
            n--;
        }
    }
};