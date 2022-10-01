class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it != val){
                nums[i++]= *it;
            }
        }
        return i;
    }
};