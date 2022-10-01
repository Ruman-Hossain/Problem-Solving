#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,n;
    cin>>t;
    while(t--){
        cin>>h>>m>>n;
        if(h<10){
            cout<<"0";
        }cout<<h<<":";
        if(m<10)
            cout<<"0";
        cout<<m<<" - A porta ";
        if(n==1)cout<<"abriu!";
        if(n==0)cout<<"fechou!";

        cout<<endl;
    }
}
