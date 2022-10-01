#include<iostream>
#include<cstdio>
#define MIN(a,b)a<b?a:b
using namespace std;
int main()
{
    int d1,d2,d3;
    int Fstp,Sstp,Tstp,min1,min2;
    cin>>d1>>d2>>d3;
    Fstp=d1+d2+d3;
    Sstp=2*((MIN(d1,d2))+d3);
    Tstp=2*(d1+d2);
    min1=MIN(Fstp,Sstp);
    min2=MIN(min1,Tstp);

    cout<<min2<<endl;
    return 0;
}
