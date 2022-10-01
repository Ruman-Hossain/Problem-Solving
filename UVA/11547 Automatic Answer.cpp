#include<iostream>
#include <stdio.h>
#include<cstring>
#include <stdlib.h>
using namespace std;
int main ()
{
    int t,n,p,q,r,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
       p=((567*n)/9)+7492;
       q=((p*235)/47)-498;
       r=q/10;
       s=abs(r%10);

       printf("%d\n",s);
    }


    return 0;
}
