class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // cout<<nums1.size()<<endl;
        // cout<<nums2.size()<<endl;
        int j=0;
        for(int i=n+m-1;i>=m;i--){
            // cout<<nums1[i]<<endl;
            nums1[i] = nums2[j++];
        }
        sort(nums1.begin(),nums1.end());
    }
};