#include<bits/stdc++.h>
using namespace std;
#define ll long long
const unsigned int M = 1000000007;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int sm=0;
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sm+=arr[i];
        }
        sm<m?cout<<sm<<endl:cout<<m<<endl;
       
    }
}
