#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum;
    while(cin>>a>>b){
            //for(i=a;i<=b;i++)cout<<i<<" ";
           // a%2==0?cout<<"even"<<endl:cout<<"odd"<<endl;
           // b%2==0?cout<<"even"<<endl:cout<<"odd"<<endl;

    sum=0;
    if(a>b){
        for(i=b+1;i<a;i++){
            if(i%2==1 || i%2==-1)
                sum+=i;
            }
        }
    else if(b>a){
        for(i=a+1;i<b;i++){
          if(i%2==1  || i%2==-1)
                sum+=i;
            }
        }
        cout<<sum<<endl;
        sum=0;

    }
    return 0;
}
