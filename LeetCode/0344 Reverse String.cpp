class Solution {
public:
    void recursive(vector<char>& s,int start, int end){
        if(start >= end) 
            return;
        swap(s[start],s[end]);
        recursive(s,start+1,end-1);
    }
    void reverseString(vector<char>& s) {
        // int i=0,j=s.size()-1;
        // while(i<j){
        //     swap(s[i],s[j]);
        //     i++,j--;
        // }


        // Recursive Solution
        int start = 0, end=s.size()-1;
        recursive(s,start,end);
    }
};