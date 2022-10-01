#include<iostream>
#include<cstdio>
#define MIN(a,b)a<b?a:b
using namespace std;
int main()
{
    int a,b,m,n,rslt;
    while(scanf("%d%d",&a,&b)!=EOF){
    if(a==-1&&b==-1)
        break;
    else{
        if(a<b){
            m=b-a;
            n=(100+a)-b;
            rslt=MIN(m,n);
        }
        else{
            m=a-b;
            n=(b+100)-a;
            rslt=MIN(m,n);
        }
        cout<<rslt<<endl;
    }

    }
    return 0;
}
