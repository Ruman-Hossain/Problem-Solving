class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        //USING SIMPLE FOR LOOP O(n) time Complexity  || Accepted
        // char local_medium ='z';
        // bool flag = false;
        // for(int i=0;i<letters.size();i++){
        //     if(letters[i]>target and letters[i]<=local_medium){
        //         local_medium = letters[i];
        //         flag = true;
        //     }
        // }
        // return flag?local_medium:letters[0];

        // BINARY SEARCH O(logn) Time Complexity
        int len = letters.size();
        int l = 0,h = len-1,m;
        while(l <= h){
            m = l + (h-l)/2;
            if(letters[m]>target)
                h = m - 1;
            else
                l = m + 1;
        }
        return letters[l % len];
    }
};