class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    // nums.erase(unique(nums.begin(),nums.end()),nums.end());
    // return nums.size();
        
        set<int>s;
        for(auto it=nums.begin();it!=nums.end();it++){
            s.insert(*it);
        }
        nums.clear();
        for(auto it=s.begin();it!=s.end();it++){
            nums.push_back(*it);
        }
        return nums.size();
    }
};