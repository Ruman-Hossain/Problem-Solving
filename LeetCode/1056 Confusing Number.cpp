class Solution {
public:
    int digitRotate(int n){
        switch(n){
            case 0: return 0;
            case 1: return 1;
            case 6: return 9;
            case 8: return 8;
            case 9: return 6;
            default: return -1;
        }
        return -1;
    }
    bool confusingNumber(int n) {
        int reversedNumber = 0;
        int originalNumber = n;
        while(n){
            int lastDigit = n%10;
            int Rotated = digitRotate(lastDigit);
            if( Rotated == -1 )
                return false;
            reversedNumber = reversedNumber *10 + Rotated;
            n/=10;
        }
        cout<<"Original : "<<originalNumber<<" Reversed : "<<reversedNumber<<endl;
        return originalNumber != reversedNumber;
    }
};