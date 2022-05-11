#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int temp, count = 0;
        int stu_size = students.size();
        int sand_size = sandwiches.size();
        int stack_ptr = 0;
        
        for(int i = 0; i < 2*stu_size; i++) {
            if(students[i] == sandwiches[stack_ptr] and stack_ptr < sand_size) {
                count++;
                stack_ptr++;
            }
            else {
                temp = sandwiches[i];
                sandwiches.push_back(temp);
            }
        }

        return count;
        
    }
};



