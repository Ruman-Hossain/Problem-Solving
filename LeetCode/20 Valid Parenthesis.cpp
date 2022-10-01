#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(int i=0;i<str.size();i++){
            if(s.empty()){
                s.push(str[i]);
            }else{
                 if((str[i]==')' && s.top()=='(') || (str[i]=='}' && s.top()=='{') || (str[i]==']' && s.top()=='[')){
                    s.pop();
                }else{
                    s.push(str[i]);
                }
            }
        }
        if(s.empty())return true;
        return false;
    }
};
//int main(){
//    string str;
//    while(cin>>str){
//        cout<<Solution().isValid(str)<<endl;
//    }
//}
