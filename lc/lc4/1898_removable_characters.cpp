class Solution {
public:
    bool isSub(string &str, string &sub, set<int> &rem) {
        int i1 = 0, i2 = 0;
        while(i1 < str.length() && i2 < sub.length()) {
            if(rem.find(i1) != rem.end() || str[i1] != sub[i2]) {
                i1++;
                continue;
            }
            i1++;
            i2++;
        }
        return i2 == sub.length();
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        int res = 0, iter = 0;
        int l = 0, r = removable.size()-1, m;
        set<int> rem;
        while(l<=r) {
            m = l + (r-l)/2;

            if(iter <= m) {
                while(iter <= m) {
                    rem.insert(removable[iter++]);
                }
            }
            else {
                while(iter > m) {
                    rem.erase(removable[iter--]);
                }
            }

            if(isSub(s, p, rem)) {
                res = max(res, m+1);
                l = m + 1;
            }
            else r = m - 1;
        }
        return res;

    }
};
