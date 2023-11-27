class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> tmap, window;

        for(auto c: t) {
            if(tmap[c] > 0) {
                tmap[c]++;
            }
            else {
                tmap[c] = 1;
            }
        }

        int countS = 0, countT = tmap.size();
        int size = INT_MAX;
        pair<int, int> index;
        
        int l = 0;
        for(int r = 0; r < s.length(); r++) {
            if(window[s[r]] > 0) {
                window[s[r]]++;
            }
            else {
                window[s[r]] = 1;
            }

            if(tmap[s[r]] && window[s[r]] == tmap[s[r]]) {
                countS++;
            }

            while(countS == countT) {
                if(r-l+1 < size) {
                    index.first = l;
                    index.second = r;
                    size = r-l+1;
                }
                window[s[l]]--;
                if(tmap[s[l]] && window[s[l]] < tmap[s[l]]) {
                    countS--;
                }
                l++;

            }
        }
        
        t = s.substr(index.first, size);
        return size != INT_MAX ? t : "";
    }
};
