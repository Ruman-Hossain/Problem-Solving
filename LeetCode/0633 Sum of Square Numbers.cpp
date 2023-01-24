class Solution {
public:
    bool SquareSumCheck(int n){
        if(n==0 || n==1)
            return true;
        long int left = 0,right=n;
        while(left<=right){
            long int mid = left + (right -left)/2;
            if(mid*mid == n)
                return true;
            else if(mid*mid > n)
                right = mid-1;
            else 
                left = mid+1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        if(c==0 || c==1) return true;
        for(long int i=1;i*i<=c;i++){
            long int x = c-(i*i);    // First Number i   Second Number x;
            if(SquareSumCheck(x))
                return true;
        }
        return false;
    }
};