#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,c=1,d=4;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=c;j<=d;j++){
            if(j%4==0)
                cout<<"PUM"<<endl;
            else
                cout<<j<<" ";

            }
        c+=4,d+=4;
    }
    return 0;
}
