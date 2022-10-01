#include<iostream>
using namespace std;
int main()
{
    unsigned int n,h,ha,ft,fta,tt,tta,t,ta,f,fa,to,toa,o;
    cin>>n;

    h=n/100;
    ha=n%100;
    ft=ha/50;
    fta=ha%50;
    tt=fta/20;
    tta=fta%20;
    t=tta/10;
    ta=tta%10;
    f=ta/5;
    fa=ta%5;
    to=fa/2;
    toa=fa%2;
    o=toa;
    cout<<n<<endl;
    cout<<h<<" nota(s) de R$ 100,00"<<endl;
    cout<<ft<<" nota(s) de R$ 50,00"<<endl;
    cout<<tt<<" nota(s) de R$ 20,00"<<endl;
    cout<<t<<" nota(s) de R$ 10,00"<<endl;
    cout<<f<<" nota(s) de R$ 5,00"<<endl;
    cout<<to<<" nota(s) de R$ 2,00"<<endl;
    cout<<o<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
