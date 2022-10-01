class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        for(int s = 0; s<nums.size();s++){
            if(nums[s]==0){
                for(int d=nums.size()-1;d>s;d--){
                    nums[d]=nums[d-1];
                }
                s++;
            }
        }
    }
};