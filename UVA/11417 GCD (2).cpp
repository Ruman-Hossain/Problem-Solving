#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    int t;
    while(a!=0){
        t=b%a;
        b=a;
        a=t;
    }
    return b;

}
int main()
{
    int n,i,j;

    while((cin>>n)&&n!=0){
    int G=0;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
    return 0;
}
