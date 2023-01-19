class Solution {
private:
        int first_index(vector<int>&nums, int target){
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)
                r=mid;
            else
                l=mid+1;
        }
        if(nums[l]!=target)
            return -1;
        return l;
    }

    int last_index(vector<int>&nums, int target){
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=l+ceil((r-l)/2.0);
            if(nums[mid]<=target)
                l=mid;
            else
                r=mid-1;
        }
        if(nums[l]!=target)
            return -1;
        return l;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        return {first_index(nums,target),last_index(nums,target)};
    }
};