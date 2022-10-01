#include<iostream>
#include<cmath>
#define MAX(a,b)((a)>b)?(a):(b)
#define MIN(a,b)((a)<b)?(a):(b)
using namespace std;
int mid(int a,int b,int c)
{
    if(a>=b&&b>=c||a<=b&&b<=c)
        return b;
    if(b>=c&&c>=a||b<=c&&c<=a)
        return c;
    if(c>=a&&a>=b||c<=a&&a<=b)
        return a;
}
int main()
{
    int a,b,c,A,B,C,max1,max2,min1,min2;
    while(cin>>a>>b>>c){

    max1=MAX(a,b);
    max2=MAX(max1,c);

    min1=MIN(a,b);
    min2=MIN(min1,c);



    A=min2,B=mid(a,b,c),C=max2;

    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;

    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    }
    return 0;
}
