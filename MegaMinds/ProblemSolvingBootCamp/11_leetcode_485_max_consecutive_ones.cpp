class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         int result =0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 int cnt=1;
//                 while(i+1< nums.size() && nums[i]==nums[i+1]){
//                     cnt++;
//                     i++;
//                 }
//                 result = max(result,cnt);
                
//             }
            
//         }
//     return result;
       int maxCnt=0,cnt=0;
       for(int x:nums){
           if(x==0)cnt=0;
           else cnt++;
           maxCnt = max(maxCnt,cnt);
       }
        return maxCnt;
    }
};