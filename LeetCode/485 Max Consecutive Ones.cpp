class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, mx = 0;
        for(int i=0;i<nums.size();i++){
            if((i==0 && nums[i]==1)|| (cnt==0 && nums[i]==1)){
                cnt++;
                mx=max(cnt,mx);
            }else{
                if( nums[i]==1 && nums[i-1]==nums[i]){
                    cnt++;
                    mx=max(cnt,mx);
                }else{
                    cnt=0;
                }
            }
        }
        return mx;
    }
};