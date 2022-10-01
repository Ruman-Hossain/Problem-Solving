#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    int kase=1;
    double m;
    string n;
    cin>>t;
    while(t--){
            cin>>m>>n;
            cout<<n[3]<<endl;
          int   b=n.length()>3?(int )n[3]-'0':0;
        double rslt=(m*0.5)+(b*0.05);

        cout<<"Case "<<kase++<<": "<<rslt<<endl;
    }

    return 0;
}
