class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char, int> occur;
        for(int i = 0; i < s.length(); i++) {
            occur[s[i]] = i;
        }

        set<char> vis;
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            if(vis.find(s[i]) != vis.end()) {
                continue;
            }      
            cout<<occur[s[i]]<<" > "<<i<<endl;
            while(!st.empty() && (st.top() > s[i]) && (occur[s[i]] > i)) {
                vis.erase(st.top());
                st.pop();
            }

            st.push(s[i]);
            vis.insert(s[i]);
        }
        
        string str = "";
        while(!st.empty()) {
            str.push_back(st.top());
            st.pop();
        }

        reverse(str.begin(), str.end());

        return str;
    }
};
