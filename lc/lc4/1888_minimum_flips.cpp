class Solution {
public:
    int minFlips(string s) {
        int len = s.length();
        int val = len;

        s += s;
        int nlen = s.length();

        vector<char> v1(nlen), v2(nlen);
        for(int i = 0; i < nlen; i++) {
            if(i%2 == 0) {
                v1[i] = '0';
                v2[i] = '1';
            }
            else {
                v1[i] = '1';
                v2[i] = '0';
            }
        }

        int l = 0;
        int d1 = 0, d2 = 0;
        for(int r = 0; r < nlen; r++) {
            if(s[r] != v1[r]) {
                d1++;
            }
            if(s[r] != v2[r]) {
                d2++;
            }

            if(r-l+1 > len) {
                if(s[l] != v1[l]) {
                    d1--;
                }
                if(s[l] != v2[l]) {
                    d2--;
                }
                l++;
            }
            
            if(r-l+1 == len) {
                val = min(val, d1);
                val = min(val, d2);
            }
        }

        return val;
    }
};
