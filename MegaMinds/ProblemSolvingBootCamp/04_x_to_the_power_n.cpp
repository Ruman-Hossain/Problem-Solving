#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    while(cin>>x>>n){
        int result =1;
        for(int i=0;i<n;i++){
            result *= x;
        }
        cout<<result<<endl;
    }
    return 0;
}