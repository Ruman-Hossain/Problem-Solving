class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        auto x = nums.size();
        for (auto i = 0; i < nums.size(); i++, x--) 
            if (x <= nums[i]) 
                if (i == 0 || x > nums[i - 1] ) return x;
        return x ? x: -1;
    }
};