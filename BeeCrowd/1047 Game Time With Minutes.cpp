#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,h,m;
    while(cin>>h1>>m1>>h2>>m2){

        h = h2 - h1;

    if (h < 0)
        h = 24 + (h2 - h1);


    m = m2 - m1;

    if (m < 0){
        m = 60 + (m2 - m1);
        h--;
    }

    if (h2 == h1 && m2 == m1)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;

    }

    return 0;
}
