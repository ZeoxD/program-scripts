class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> vtr;
        if(s.length() < 10) return vtr;

        set<string> st;
        set<string> res;

        for(int i = 0; i < s.length() - 9; i++) {
            string str = s.substr(i, 10);

            if(st.find(str) != st.end()) {
                res.insert(str);
                continue;
            }
            st.insert(str);
        }

        for(auto it = res.begin(); it!=res.end(); it++) {
            vtr.push_back(*it);
        }

        return vtr;
    }
};
