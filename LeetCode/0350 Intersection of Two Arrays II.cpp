class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int flen = nums1.size();
        int slen = nums2.size();
        vector<int>rslt,temp;
        if(slen>flen){
            temp=nums1;
            nums1=nums2;
            nums2=temp;
        }
        unordered_map<int,int>fcount;
        for(auto i:nums1) fcount[i]++;
        for(auto i:nums2){
            if(fcount[i]>0){
                rslt.push_back(i);
                fcount[i]--;
            }
        }
    return rslt;
    }
};