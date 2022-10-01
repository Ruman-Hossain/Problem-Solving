#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    char a[105],b[105],c[105];
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>a>>b>>c;
        //cout<<b<<endl<<c<<endl<<a<<endl;
        int ln=strlen(a);
        int cnt=0;
        for(int i=0;i<ln;i++){
            if(c[i]==a[i] || c[i]==b[i]){
                cnt++;
            }
        }
        if(cnt==ln)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
