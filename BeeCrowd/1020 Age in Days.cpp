#include<iostream>
using namespace std;
int main()
{
    long long int n,y,ya,m,ma,d;
    cin>>n;

    y=n/365;
    ya=n%365;

    m=ya/30;
    ma=ya%30;

    d=ma;

    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;

    return 0;
}
