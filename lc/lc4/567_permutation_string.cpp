class Solution {
public:
    bool map_compare(map<char, int> &m1, map<char, int> &m2) {
        for(auto it = m1.begin(); it != m1.end(); it++) {
            if(it->second != m2[it->first]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        map<char, int> m1, m2;
        int l1 = s1.length(), l2 = s2.length();

        if(l1 > l2) {
            return false;
        }

        for(int i = 0; i < l1; i++) {
            m1[s1[i]] += 1;
            m2[s2[i]] += 1;
        }

        if(map_compare(m1, m2)) {
            return true;
        }

        int l = 0;
        for(int i = l1; i < l2; i++) {
            m2[s2[i]] += 1;
            m2[s2[l]] -= 1;

            l++;

            if(map_compare(m1, m2)) {
                return true;
            }
        }

        return false;
    }
};
