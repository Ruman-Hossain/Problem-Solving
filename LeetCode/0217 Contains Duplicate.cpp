class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // APPROACH : 1-----------------
    //     set<int>data;
    //     for(auto it:nums){
    //         data.insert(it);
    //     }
    //     return data.size()!=nums.size();

        // APPROACH : 2 ------------------
    //    unordered_map<int,int>freq(0);
    //     for(int i=0;i<nums.size();i++){
    //         freq[nums[i]]++;
    //         if(freq[nums[i]]>1)
    //             return true;
    //     }
    //     return false;

        // APPROACH : 3 --------------------
        map<int,int>store;
        for(int i=0;i<nums.size();i++){
            if(store.find(nums[i]) != store.end()){
                return true;
            }else{
                store[nums[i]]=i;
            }
        }
        return false;
    }
};