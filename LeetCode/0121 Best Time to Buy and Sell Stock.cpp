class Solution {
public:
    int maxProfit(vector<int>& price) {
        int result=0, curr_min,curr_max;
        curr_min = price[0];
        curr_max = price[0];
        for(int i=1;i<price.size();i++){
            if(price[i] > curr_min){
                curr_max = price[i];
                result = max(result,curr_max - curr_min);
            }else{
                curr_min = price[i];
            }
        }
        return result;
    }
};