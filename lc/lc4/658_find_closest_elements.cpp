class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        //distance vector from given array
        vector<int> vtr;
        for(auto i: arr) {
            vtr.push_back(abs(i-x));
        }
        
        int minv = 0;
        //first window of sliding window
        for(int i = 0; i < k; i++) {
            minv += vtr[i];
        }
        
        int res = minv;
        int index = 0;
        
        //iterating from second window till last
        for(int i = 1; i < vtr.size()-k+1; i++) {
            minv += vtr[i+k-1];
            minv -= vtr[i-1];
            if(minv < res) {
                res = minv;
                index = i;
            }
        }

        //storing subarry in a vector
        vector<int> v;
        for(int i = index; i < index+k; i++) {
            v.push_back(arr[i]);
        }

        return v;
    }
};
