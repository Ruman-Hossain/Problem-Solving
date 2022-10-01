#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int checkGoodNumber(long input,int k);
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int count=0;
    long long nmbr;
    for(int i=0;i<n;i++){
        scanf("%I64d",&nmbr);
        if(checkGoodNumber(nmbr,k))count+=1;

    }
    cout<<count<<endl;

    return 0;

}
int  checkGoodNumber(long input,int k)
{
    int digits[10]={0};
    while(input>0){
        digits[input%10]=1;
        input/=10;
    }
    int output=1;
    for(int j=0;j<=k;j++){
        if(digits[j]==0){
            output=0;
        }
    }
    return output;
}
