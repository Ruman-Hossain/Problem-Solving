#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Given, distance=velocity^2/(2*force),
    or, 2*d*f=velocity^2 the question tell us that
    d is a constant. so, velocity=sqrt(2*force).
    and volume=(velocity*3600)/2*Length. print--> 8 floating point */
    double l,f;
    while(cin>>l>>f){
            if(l==0&&f==0)break;
            double v=sqrt(2*l*f);
            double vlt=(v*3600)/(2*l);
        cout<<setprecision(8)<<fixed<<v<<" ";
        cout<<setprecision(8)<<fixed<<vlt<<endl;
    }

    return 0;
}
