class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //SORT AND CHECK THE STRING ARE SAME OR NOT
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return t==s;
        
        
        //ALTERNATIVE APPROACH
        int freqS[26]={0};
        int freqT[26]={0};
        int lenS = s.size();
        int lenT = t.size();
        
        if(lenS != lenT){
            return false;
        }else{
            for(int i=0;i<lenS;i++){
                freqS[s[i]-'a']++;
                freqT[t[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(freqS[i] != freqT[i])
                    return false;
            }
        }
        return true;
    }
};