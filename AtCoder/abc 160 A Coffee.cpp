#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    string str;
    while(cin>>str){
        if(str[2]==str[3] && str[4]==str[5])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}