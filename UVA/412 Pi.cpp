#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int gcd(int a,int b){
    return a%b?gcd(b,a%b):b;
}
int main()
{
    int n,a[100],i,cnt;
   while((cin>>n)&&n!=0){
    for(i=0;i<n;i++)
        cin>>a[i];

     cnt=0;
     for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(gcd(a[i],a[j])==1)
                cnt++;
                }
            }
            double p=(2.0*cnt)/n/(n-1);
            //cout<<cnt<<endl;
            if(cnt)cout<<setprecision(6)<<fixed<<sqrt(6/p)<<endl;
            else cout<<"No estimate for this data set."<<endl;
        }
    return 0;
}
