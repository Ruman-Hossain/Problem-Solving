class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int j = nums.size()-1; //6
        int i = j-k+1;   // 4
        while(i < j) swap(nums[i++],nums[j--]);

        i=0,j=nums.size()-(k+1);  // 0 3
        while(i < j) swap(nums[i++],nums[j--]);

        i=0, j=nums.size()-1; //0 6
        while(i < j) swap(nums[i++],nums[j--]);
    }
};