#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    while(cin>>n){
            sum=0;
    for(i=n+1;sum<7;i++){
    if(i%2!=0){
        sum+=1;
        if(sum<=6)
            cout<<i<<endl;
            }
        }
    }
    return 0;
}
