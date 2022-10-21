class Solution {
private:
    int stringPalindromeCheck(string str){
    int i=0,j=str.size()-1;
        while(i<=j){
            if(str[i++]!=str[j--]){
                return false;
            }
        }
        return true; 
    }
    // int reverseNumber(int n){
    //     return ;
    // }
public:
    bool isPalindrome(int x) {
        //Reverse Number using Recursion
        //return x==reverseNumber(x);
        
        //Reverse Number Number->stream->String->Reversed
        stringstream ss;
        ss << x;
        string str = ss.str();
        return stringPalindromeCheck(str);
    }
};