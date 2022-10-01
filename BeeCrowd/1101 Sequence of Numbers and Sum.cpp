#include<iostream>
using namespace std;
int main()
{
    int m,n,a,b,sum,i;
    while(cin>>m>>n){
            sum=0;
    if(m<1||n<1)break;
        if(n!=0&&m>n){
            a=n,b=m;
            }
        if(m!=0&&m<n){
            a=m,b=n;

        }

        for(i=a;i<=b;i++){
            sum+=i;
        cout<<i<<" ";

        }
        cout<<"Sum="<<sum<<endl;
        }

    return 0;
}
