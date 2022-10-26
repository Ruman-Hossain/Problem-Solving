class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        //USING MAP Time Complexity O(nlogn) Space Complexity O(n+n) = O(2n) = O(n)
//         map<int,int>mp;
//         vector<int>result;
        
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         for(int i=0;i<mp.size();i++){
//             if(mp[i]==2)
//                 result.push_back(i);
//         }
//         return result;
        
        //SWAPPING NUMBERS TO ITS ORIGINAL POSITION
        for(auto &x:nums){
            x -=1;  //making the values s the like the index number 0 to n-1;
        }
        for(int i=0;i<nums.size();i++){
            while(nums[i] != nums[nums[i]]){
                swap(nums[i],nums[nums[i]]);
            }
            
        }
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(i !=nums[i])
                result.push_back(nums[i]+1);
        }
        return result;
    }
};
/*
4 3 2 7 8 2 3 1
3 2 1 6 7 1 2 0  x - = 1
6 2 1 3 7 1 2 0
2 2 1 3 7 1 6 0
1 2 2 3 7 1 6 0
2 1 2 3 7 1 6 0
2 1 2 3 0 1 6 7
0 1 2 3 2 1 6 7
2 1 -> 3 2



*/