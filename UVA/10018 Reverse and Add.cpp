#include<bits/stdc++.h>
using namespace std;
long int rvrs(long int n){
    long int sum=0;
    while(n>0){
        sum=sum*10 + n%10;
        n/=10;
    }
    return sum;
}
int main()

{
    long int t,n,sum=0,m=0;
    while(cin>>t){
        while(t--){
            cin>>n;
            int cnt=0;
            while(true){
                sum=rvrs(n);
                if(sum==n){
                    break;
                }
                else{
                    n=n+sum;
                    cnt++;
                }
            }
            cout<<cnt<<" "<<sum<<endl;
        }
    }
    return 0;
}
