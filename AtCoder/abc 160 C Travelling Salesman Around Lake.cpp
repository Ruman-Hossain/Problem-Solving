#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    int k,n;
    while(cin>>k>>n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
 
        }
       int mn=arr[n-1]-arr[0];
       for(int i=1;i<n;i++){
            mn=min(mn,k-(arr[i]-arr[i-1]));
       }
        cout<<mn<<endl;
    }
    return 0;
}