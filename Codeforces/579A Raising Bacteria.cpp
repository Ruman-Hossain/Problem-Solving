#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    r=0;
    do{
        if(n%2==1)
            r++;
            n/=2;


    }while(n>0);

    cout<<r<<endl;

    return 0;
}
