#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        const int SIZE = 10;
        bool arr[SIZE*3];
        int len = rings.length();
        int count = 0;

        for(int i = 0; i<SIZE*3; i++) {
            arr[i] = false;
        }

        for(int i = 0; i<len; i=i+2) {

            if(rings[i] == 'R') {
                arr[int(rings[i+1])-48] = true;
                
            }
            else if(rings[i] == 'G') {
                arr[SIZE+int(rings[i+1])-48] = true;
                
            }
            else if(rings[i] == 'B') {
                arr[(2*SIZE)+int(rings[i+1])-48] = true;
               
            }
        }

        for(int i = 0; i < SIZE; i++) {
            if(arr[i] && arr[SIZE+i] && arr[2*SIZE + i]) {
                count++;
            }
        }

        return count;
    }
};

// 