class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R = matrix.size(), C = matrix[0].size();
        int top = 0, bottom = R-1;
        int mid;

        while(top<=bottom) {
            mid = top + (bottom - top) / 2;
            if(target < matrix[mid][0]) {
                bottom = mid-1;
            }
            else if(target > matrix[mid][C-1]) {
                top = mid+1;
            }
            else break;
        }
        
        if(top > bottom) {
            return false;
        }
        int rs = mid;
        int left = 0, right = C-1;
        while(left<=right) {
            mid = left + (right-left)/2;
            if(target < matrix[rs][mid]) {
                right = mid - 1;
            }
            else if(target > matrix[rs][mid]) {
                left = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;

    }
};
