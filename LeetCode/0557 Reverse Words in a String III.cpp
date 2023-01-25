class Solution {
public:
    string reverseWords(string str) {
    //     long int current = 0,start=0, wordLast=0;
    //     while(current <= str.size()){
    //         while(str[current] !=' ' && current < str.size())
    //             current++;

    //         wordLast = current-1;

    //         while(start<=wordLast) 
    //             swap(str[start++],str[wordLast--]);

    //         start = ++current;
    //     }
    //    return str;

    int current,lastStart=0;
    for(current=0;current<str.size();current++){
        if(str[current] == ' '){
            reverse(str.begin() + lastStart, str.begin() + current);
            lastStart = current + 1;
        }
    }
    reverse(str.begin() + lastStart,str.end());
    return str;
    }
};