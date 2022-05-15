    #include<iostream>
    #include<string>
    #include<vector>

    using namespace std;

    class Solution {
    public:
        int convertTime(string current, string correct) {
            int cur = 0;
            int cor = 0;

            for(const auto &cu: current) {
                if(cu >= '0' && cu <= '9') {
                    cur = cur*10 + (int(cu)-48);
                }
            }

            for(const auto &co: correct) {
                if(co >= '0' && co <= '9') {
                    cor = cor*10 + (int(co)-48);
                }
            }

            if(cur>60) {
                cur -= 40;
            }

            cur -= cur/100 * 40;
            
            if(cor>60) {
                cor -= 40;
            }

            cor -= cor/100 * 40;

            if(cur == cor) {
                return 0;
            }
            cor = cor - cur;
            cur = 0;

            while(cor > 0) {
                if(cor>=60) {
                    cor -= 60;
                    cur++;
                }
                else if(cor>=15) {
                    cor -= 15;
                    cur++;
                }
                else if(cor>=5) {
                    cor -= 5;
                    cur++;
                }
                else if(cor>=1) {
                    cor -= 1;
                    cur++;
                }
            }

            return cur;

        }
    };