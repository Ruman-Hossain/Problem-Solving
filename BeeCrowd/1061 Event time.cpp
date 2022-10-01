#include<bits/stdc++.h>
using namespace std;
int main()
{

    int d,dd,h,hh,m,mm,s,ss;
    scanf("Dia %d", &d);
    scanf("%d : %d : %d\n", &h, &m, &s);
    scanf("Dia %d", &dd);
    scanf("%d : %d : %d", &hh, &mm, &ss);

    s=ss-s;
    m=mm-m;
    h=hh-h;
    d=dd-d;

    if(s<0){
        s+=60;
        m--;
    }
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
        d--;
    }
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
    return 0;
}
