#include<iostream>
using namespace std;
int main()
{
    long long int n,h,ha,m,ma,s;
    cin>>n;

    h=n/3600;
    ha=n%3600;
    m=ha/60;
    ma=ha%60;
    s=ma;

    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
