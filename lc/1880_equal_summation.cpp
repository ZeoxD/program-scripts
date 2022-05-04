#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {

        int arr[3];
        for(short i = 0; i < 3; i++) {
            arr[i] = 0;
        }

        for(short i = 0; i < firstWord.length() ; i++) {
            
            arr[0] += (int(firstWord[i])-97) * pow(10, firstWord.length()-1 - i);
        }

        for(short i = 0; i < secondWord.length() ; i++) {
            arr[1] += (int(secondWord[i])-97) * pow(10, secondWord.length()-1 - i);
        }
        
        for(short i = 0; i < targetWord.length() ; i++) {
            arr[2] += (int(targetWord[i])-97) * pow(10, targetWord.length()-1 - i);

        }

        if(arr[0] + arr[1] == arr[2]) {
            return true;
        }

        return false;
    }
};
