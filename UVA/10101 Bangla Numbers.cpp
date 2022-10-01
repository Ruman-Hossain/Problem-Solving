#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
    long long int n,k,ko,l,lo,h,ho,s,so,kk,kko,lk,lko,hk,hko,sk,sko,nrm,nrmo,skow;
    int kase=1;
    while(scanf("%lld",&n)==1){
        printf("%4d.",kase++);

            k=n/100000000000000LL;
            if(k>0)
            printf(" %lld kuti",k);


        ko=n%100000000000000LL;
            l=ko/1000000000000LL;
            if(l>0)
            printf(" %lld lakh",l);

        lo=ko%1000000000000LL;
            h=lo/10000000000LL;
            if(h>0)
            printf(" %lld hajar",h);

        ho=lo%10000000000LL;
            s=ho/1000000000;
            if(s>0)
            printf(" %lld shata",s);


        so=ho%1000000000;
            nrm=so/10000000;
            if(nrm==0&&n>10000000)
            printf(" kuti");

            if(nrm>0)printf(" %lld kuti",nrm);

        kko=so%10000000;
            lk=kko/100000;
            if(lk>0)
            printf(" %lld lakh",lk);


        lko=kko%100000;
            hk=lko/1000;
            if(hk>0)
            printf(" %lld hajar",hk);


        hko=lko%1000;
            sk=hko/100;
            if(sk>0)
            printf(" %lld shata",sk);


        sko=hko%100;
            skow=sko/1;
            if(skow>0)
            printf(" %lld",skow);

            if(n==0)printf(" %lld",n);

            printf("\n");

    }
}
