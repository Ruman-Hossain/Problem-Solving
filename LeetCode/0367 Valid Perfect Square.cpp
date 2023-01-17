class Solution {
public:
    bool isPerfectSquare(int num) {
        int high=num, low=1,mid;
        while(high-low>0){
            int mid = low + (high-low)/2;
            if(mid== sqrt(num)) return true;
            else if(mid>sqrt(num)) high = mid-1;
            else low=mid+1;
        }
        return low == sqrt(num);
    }
};