class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>data;
        data=heights;
        sort(data.begin(),data.end());
        int cnt=0;
        for(int i=0;i<data.size();i++){
            if(data[i]!=heights[i])
                cnt++;
        }
        return cnt;
    }
};