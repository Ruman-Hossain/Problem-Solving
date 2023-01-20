class Solution {
public:
    int arrangeCoins(int n) {
        // int count = 1;
        // while(n>0){
        //    if(n>=count){
        //        n-=count;
        //        count++;
        //    }else{
        //        n-=count;
        //    }
        // }
        // return count-1;

        // BINARY SEARCH APPROACH
        long int low= 1; 
        long int high= n;
        while (low<= high){
            long int mid = low+ (high-low)/2;
            long int mid_filled = (mid*(mid+1))/2;
            if (mid_filled==n)
                return mid;
            else if (mid_filled > n){
                high= mid-1;
            }
            else{
                low= mid+1;
            }
        } 
        return low-1;
    }
};