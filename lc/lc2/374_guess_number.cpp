#include<iostream>

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long l = 1;
        long r = n;
        int val;
        while(l <= r)
        {    
            long mid = (l + r) / 2;
            int val = guess(mid);

            if(val == 1) {
                l = mid + 1;
            }
            else if( val == -1) {
                r = mid - 1;
            }
            else {
                return mid;
            }
        }
        
        return -1;

    }
};

