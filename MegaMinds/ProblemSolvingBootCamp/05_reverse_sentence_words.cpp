#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence,word;
    getline(cin,sentence);
    stringstream iss(sentence);
    while(iss>>word){
        for(int i=word.size()-1;i>=0;i--){
            cout<<word[i];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
