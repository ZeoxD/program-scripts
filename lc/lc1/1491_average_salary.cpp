#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {

        double avg = 0.0f;
        const int size = salary.size();
        int sum = 0;
        sort(salary.begin(), salary.end());

        for(int i = 1; i < size-1; i++) {
            sum += salary[i];
        }
        
        cout<<sum<<endl;

        avg = sum/(size-2)*1.0;

        return avg;
    }
};