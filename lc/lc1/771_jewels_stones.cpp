#include<iostream>
#include<string>
#include<array>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        array<int, 122-65> str_data;

        for(int i = 0 ; i <= 122-65; i++)
        {
            str_data[i] = 0;
        }
        
        for(int i = 0 ; i < stones.length(); i++)
        {
            str_data[int(stones[i])-65]++;
        }

        for(int i = 0 ; i < jewels.length(); i++)
        {
            str_data[96-65] += str_data[int(jewels[i]-65)];
        }

        return str_data[96-65];
    }
};

int main()
{
    Solution s;
    int val = s.numJewelsInStones("z", "ZZ");
    cout<<val;
}