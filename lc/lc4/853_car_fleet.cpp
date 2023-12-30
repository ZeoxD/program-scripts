class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vtr;
        stack<int> st;
        int size = position.size();
        for(int i = 0; i < size; i++) {
            vtr.push_back({position[i], speed[i]});
        }

        sort(vtr.rbegin(), vtr.rend());
        int last;

        for(int i = 0; i < size; i++) {
            st.push((target - vtr[i].first)/vtr[i].second);
            if(st.size()>=2 ) {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                if(first <= second) {
                    st.pop();
                }
            }
        }

        int res = st.size();
        return res;
    }
};
