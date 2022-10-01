class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitCounter=0;
        for(auto it=nums.begin();it!=nums.end();it++){
            int digitCounter=0,currentNumber= *it;
            while(currentNumber){
                currentNumber/=10;
                digitCounter++;
            }
            if(digitCounter%2==0)
                evenDigitCounter++;
        }
        return evenDigitCounter;
    }
};