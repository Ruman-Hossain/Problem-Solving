class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        int left=0,right=0;
        while(i<j){
            if(numbers[i] + numbers[j] == target){
                left = i+1;
                right = j+1;
                break;
            }
            else if(numbers[i] + numbers[j] > target)
                j--;
            else
                i++;
        }
        return {left,right};
    }
};