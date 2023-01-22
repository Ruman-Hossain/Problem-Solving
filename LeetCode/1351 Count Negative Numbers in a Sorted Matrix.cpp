class Solution {
public:
	int countNegatives(vector<vector<int>>& grid) {
		int m=grid.size(), n=grid[0].size();
        int row = 0, col = n- 1, result=0;
		while(row < m){
			while(col >= 0 && grid[row][col] < 0){col--;}
			result += n - col - 1;
			row++;
		}
		return result;
	}
};