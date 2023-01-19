class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int rows = matrix.size();
    //     int cols = matrix[0].size();
    //     int row = 0, col = cols -1;

    //     while(row< rows && col > -1){
    //         int current = matrix[row][col];
    //         if(current == target) return true;
    //         else if(current>target) col--;
    //         else row++;
    //     }
    //     return false;
    // }

    //Considering Whole Matrix As a single Row
        int n= matrix[0].size();
        int low=0, mid, high=matrix.size()*n-1;
        while(low<=high){
            mid= low + (high-low)/2;
            if(matrix[mid/n][mid%n]==target) {
                return true;
            }
            else if(matrix[mid/n][mid%n]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};