class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>WordStore;
        for(auto it : words){
            WordStore[it]++;
        }
        multimap<int,string, greater<int> >SortedWordStore;
        for(auto it:WordStore){
            SortedWordStore.insert(make_pair(it.second,it.first));
        }
        vector<string>result;
        int counter=0;
        for(auto it:SortedWordStore){
            if(counter==k)
                break;
            result.push_back(it.second);
            counter++;
        }
        return result;
    }
};