#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double r1,r2,r3,theta,area,a,b,c,s,rslt;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2.0;

        area=sqrt(s*(s-a)*(s-b)*(s-c));
        rslt=area;

        theta=acos((a*a+c*c-b*b)/2/a/c);
        rslt -=r1*r1*theta/2;

        theta = acos((a*a+b*b-c*c)/2/a/b);
        rslt -=r2*r2*theta/2;

        theta = acos((b*b+c*c-a*a)/2/b/c);
        rslt -= r3*r3*theta/2;

        printf("%lf\n",rslt);
    }

        return 0;
}
