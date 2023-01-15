class Solution { 
public: 
    int differenceOfSum(vector<int>& nums) { 
        int element_sum=0,digit_sum=0,temp; 
        for(int i : nums){ 
            element_sum+=i; 
            while(i){ 
                temp = i%10; 
                digit_sum+=temp;
                i/=10; 
            } 
        } 
        return (element_sum - digit_sum); 
    } 
};