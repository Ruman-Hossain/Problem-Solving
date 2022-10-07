#include<bits/stdc++.h>
using namespace std;
int cnt;
int RecursionCounter(int n){
    cnt++;
    if(n==0) return 0;
    if(n==1) return 1;
    return RecursionCounter(n-1)+RecursionCounter(n-2);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        cout<<"fib("<<n<<") = "<<cnt<<" calls = "<<RecursionCounter(n)<<endl;
    }
    return 0;
}