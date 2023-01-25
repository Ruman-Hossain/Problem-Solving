class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int len = nums2.size(), result =0;
        for(int i=0;i<nums1.size();i++){
            int x= lower_bound(nums2.rbegin(),nums2.rend(),nums1[i])-nums2.rbegin();
            result=max( result, len - x - 1 - i );
        }
        return result;
    }
};