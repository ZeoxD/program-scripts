class Solution {
public:

    bool map_compare(map<char, int> &m1, map<char, int> &m2) {

        for(auto it = m1.begin(); it != m1.end(); it++) {
            if(it->second != m2[it->first]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> vtr;     
        map<char, int> ms, mp;

        int slen = s.length(), plen = p.length();
        if(slen < plen) return vtr;
        
        for(int i = 0; i < p.length(); i++) {
            ms[s[i]] += 1;
            mp[p[i]] += 1;
        }

        if(map_compare(ms, mp)) vtr.push_back(0);

        int l = 0;
        for(int i = plen; i < slen; i++) {
            ms[s[i]] += 1;
            ms[s[l]] -= 1;

            l += 1;
            if(map_compare(ms, mp)) {
                vtr.push_back(l);
            }
        }
        return vtr;
    }
};
