class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int> > v;
        
        for(int i=0;i<nums.size();i++) 
            v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int idx1=0;
        int idx2=0;
        int i=0;
        int j=nums.size()-1;
        
        while(i<j){
            if(v[i].first + v[j].first == target){
                idx1=v[i].second;
                idx2=v[j].second;
                break;
            }else{
                if(v[i].first + v[j].first < target)i++;
                else if(v[i].first + v[j].first > target) j--;
            }
        }
        return {idx1,idx2};
    }
};