#include<bits/stdc++.h>
 
using namespace std;
 int widthCounter(int n){
    int cnt = 0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
 }
int main() {
 
    int n;
    while(cin>>n){
        if(n==0)break;
        int fixedWidth = widthCounter(pow(2,2*n-2));
        //cout<<"Max Width : "<<fixedWidth<<endl;
        for(int i=1;i<=n;i++){
            int cnt =1;
            for(int j=pow(2,i-1);cnt<=n;cnt++,j*=2){
                if(cnt<n)cout<<right<<setw(fixedWidth)<<j<<" ";
                else cout<<right<<setw(fixedWidth)<<j<<endl;
            }
        }
        cout<<endl;
    }
 
    return 0;
}