#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],i;
    cin>>t;
    int kase=1;
    while(t--){

        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Case "<<kase++<<": "<<a[i/2]<<endl;
    }
    return 0;
}
