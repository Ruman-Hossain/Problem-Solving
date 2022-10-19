// class Solution {
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         map<string,int>WordStore;
//         for(auto it : words){
//             WordStore[it]++;
//         }
//         multimap<int,string, greater<int> >SortedWordStore;
//         for(auto it:WordStore){
//             SortedWordStore.insert(make_pair(it.second,it.first));
//         }
//         vector<string>result;
//         int counter=0;
//         for(auto it:SortedWordStore){
//             if(counter==k)
//                 break;
//             result.push_back(it.second);
//             counter++;
//         }
//         return result;
        
//     }
// };

// :: // USING OPERATOR OVERLOADING // :: //
class Solution {
private:
    struct Info {
        string word;
        int fre;
        
        Info(string word, int fre)
            : word(word), fre(fre) {}
        
        bool operator < (const Info &other) const {
            if (fre == other.fre) {
                return word < other.word;
            }
            return fre > other.fre;
        }
        
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for (string word : words) {
            mp[word]++;
        }
        vector<Info> vec;
        for (auto it : mp) {
            vec.push_back({it.first, it.second});
        }
        sort(vec.begin(), vec.end());
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i].word);
        }
        return ans;
    }
};