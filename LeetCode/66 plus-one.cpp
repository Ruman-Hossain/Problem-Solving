class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        //WHEN ALL DIGITS ARE 9 then you need to increase digits size like 9 9 9 + 1 = 1 0 0 0
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};