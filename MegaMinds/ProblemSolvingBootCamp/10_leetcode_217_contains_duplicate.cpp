class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>data;
        for(auto it:nums){
            data.insert(it);
        }
        return data.size()!=nums.size();
    }
};