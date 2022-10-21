class Solution {
    
private:
    //int stringPalindromeCheck(string str){
    // int i=0,j=str.size()-1;
    //     while(i<=j){
    //         if(str[i++]!=str[j--]){
    //             return false;
    //         }
    //     }
    //     return true; 
    // }
    long long ten=1;
    long long reverseNumber(long long n){
        if(n<=9)return n;
        long long right = n%10;
        long long left = reverseNumber(n/10);
        ten*=10;
        return right*ten+left;
    }
public:
    bool isPalindrome(int x) {
        //Reverse Number using Recursion
        if(x<0) return false;
        cout<<reverseNumber(x)<<endl;
        ten = 1;
        return x == reverseNumber(x);
        
        //Reverse Number Number->stream->String->Reversed
        // stringstream ss;
        // ss << x;
        // string str = ss.str();
        // return stringPalindromeCheck(str);
    }
};
