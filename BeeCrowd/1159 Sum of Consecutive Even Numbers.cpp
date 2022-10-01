#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count,sum;
    while(cin>>n){
            if(n==0)break;
            count=0,sum=0;
        for(int i=n;count<5;i++){
            if(i%2==0){
                count++;
                sum+=i;
            }
        }
    cout<<sum<<endl;
    }
    return 0;
}
