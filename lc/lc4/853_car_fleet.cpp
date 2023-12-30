class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<long, long>> vtr;
        stack<long> st;
        int size = position.size();
        for(int i = 0; i < size; i++) {
            vtr.push_back({position[i], speed[i]});
        }

        sort(vtr.rbegin(), vtr.rend());
        long last;

        for(int i = 0; i < size; i++) {
            st.push( (target - vtr[i].first)*1000000 / vtr[i].second);
            
            if(st.size() >= 2 && st.top() <= last) {
                st.pop();
            }
            
            last = st.top();

        }

        int res = st.size();
        return res;
    }
};
