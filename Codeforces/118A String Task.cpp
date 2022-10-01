#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifdef JUDGE
    freopen("aplusb.in", "rt", stdin);
    freopen("aplusb.out", "wt", stdout);
    #endif
    string str;
    while(getline(cin,str)){
        int ln=str.size();
        for(int i=0;i<ln;){
            if(isupper(str[i])){
                str[i]=tolower(str[i]);
                //cout<<str[i];
                if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
                    cout<<'.'<<str[i];
            }
            else if(islower(str[i])){
                if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
                    cout<<'.'<<str[i];
            }
           i++;
        }
        cout<<endl;

    }
    return 0;

}
