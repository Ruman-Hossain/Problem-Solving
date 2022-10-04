class Solution{
    int n;
    string ballonColors;
    vector<int>removeTime;
    int dp[100005][28];
    
    int getMinCost(int pos, int previousBallonColor){
        if(pos==n){
            return 0;
        }
        if(dp[pos][previousBallonColor] != -1){
            return dp[pos][previousBallonColor];
        }
        int mini = 1e9;
        if(ballonColors[pos]-'a'+1 == previousBallonColor){
            mini = removeTime[pos] + getMinCost(pos+1, previousBallonColor);
        }else{
            int skip = getMinCost(pos+1,(ballonColors[pos]-'a')+1);
            int remove = removeTime[pos] + getMinCost(pos+1, previousBallonColor);
            mini = min(skip,remove);
        }
        
        return dp[pos][previousBallonColor] = mini;
    }
    public:
        int minCost(string colors, vector<int>&neededTime){
            n = colors.size();
            ballonColors = colors;
            removeTime=neededTime;
            
            memset(dp,-1,sizeof dp);
           return getMinCost(0,0);
        }
};

// class Solution {
// public:
//     int minCost(string colors, vector<int>& neededTime) {
//         int output = 0;
//         int n = neededTime.size();
//         int count, sum, maxval;
        
//         for(int i=0; i<n; ) {
//             count = 0, sum = 0, maxval = 0;
//             char color = colors[i];
//             while(colors[i] == color) {
//                 count += 1;
//                 sum += neededTime[i];
//                 maxval = max(maxval, neededTime[i]);
//                 i++;
//             }
//             if(count > 1) {
//                 sum -= maxval;
//                 output += sum;
//             }
//         }
        
//         return output;
//     }
// };