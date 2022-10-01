class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int ln = nums.size();
        int data[ln+1];
        memset(data,0,sizeof(data));
        for(auto it=nums.begin();it!=nums.end();it++){
            data[*it]++;
        }
        vector<int>rslt;
        for(int i=1;i<=nums.size();i++){
            if(data[i]==0)
                rslt.push_back(i);
        }
        return rslt;
    }
};