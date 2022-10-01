#include<bits/stdc++.h>
using namespace std;
int main() {
//    #ifdef JUDGE
//    freopen("aplusb.in", "rt", stdin);
//    freopen("aplusb.out", "wt", stdout);
//    #endif

    int t;
    string str;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++){
        getline(cin,str);
        int ln=str.size();
        if(ln<=10)
            cout<<str<<endl;
        else{
            cout<<str[0]<<ln-2<<str[ln-1]<<endl;
        }
    }
    return 0;

}
