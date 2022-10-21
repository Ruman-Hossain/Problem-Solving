class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>>groups;
        for(int i=0;i<nums.size();i++){
            groups.push_back(make_pair(nums[i],i));
        }
        sort(groups.begin(),groups.end());
        for(int i=1;i<groups.size();i++){
            if(groups[i-1].first == groups[i].first and abs(groups[i-1].second - groups[i].second)<=k)
                return true;
        }
        return false;
    }
};