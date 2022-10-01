#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int cola,half,total;
    while(scanf("%lld",&cola)!=EOF){
        half=cola/2;
        total=cola+half;
        cout<<total<<endl;

    }

    return 0;
}
/*
#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{

    int a, tmp;
    while (cin>>a) {
        if (a==1||a==0) {
            cout<<a<<endl;
            continue;
        }
        tmp=a;
        a=a+a/2;
        a=a-a%3;
        cout<<tmp+(a/3)<<endl;
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
int a,n;
while(scanf(“%d”,&n)==1)
{
a=n;
while(n>=3)
{
a=a+(n/3);
n=(n/3)+(n%3);
}
if(n==2)
{
a++;
}
printf(“%dn”,a);
}
return 0;
}
*/
