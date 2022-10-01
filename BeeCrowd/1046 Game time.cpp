#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,rslt;
    cin>>x>>y;
    if(x>y&&y<=12){
        rslt=(24+y)-x;
    }
    else if(x==y){
        rslt=24;
    }
    else if(x<y&&y>12){
        rslt=y-x;
    }
    else if(x<y&&y<=12){
        rslt=y-x;
    }
    cout<<"O JOGO DUROU "<<rslt<<" HORA(S)"<<endl;

    return 0;
}
