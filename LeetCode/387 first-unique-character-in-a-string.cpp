class Solution {
public:
    int firstUniqChar(string s) {
        //USING UNORDERED MAP
        // unordered_map<char,int>ump;
        // for(int i=0;i<s.size();i++){
        //     ump[s[i]]++;
        // }
        // for(int i=0;i<s.size();i++){
        //     if(ump[s[i]]==1)
        //         return i;
        // }
        // return -1;
        
        //USING FREQUENCY COUNTER ARRAY
        int counter[26]={0};
        for(int i=0;i<s.size();i++){
            counter[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(counter[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};