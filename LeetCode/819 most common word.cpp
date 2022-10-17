class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int>mp;
        int n = paragraph.size();
        for (int i = 0; i < n;) {
            string str = "";
            while (i < n and !isalpha(paragraph[i])) {
                i++;
            }
            while (i < n and isalpha(paragraph[i])) {
                str += paragraph[i];
                i++;
            }
            if (str.size() > 0) {
                transform(str.begin(), str.end(), str.begin(), ::tolower);
                mp[str]++;
            }
        }
        for(auto it: banned){
            if(mp.count(it))
                mp[it]=-1;
        }
        int maxFreq=0;
        string strMaxFreq="";
        for(auto it:mp){
            if(it.second > maxFreq){   //IF YOU USE AUTO YOU MUST HAVE TO USE DOT
                strMaxFreq = it.first;
                maxFreq = it.second;
            }
                
        }
        return strMaxFreq;
    }
};