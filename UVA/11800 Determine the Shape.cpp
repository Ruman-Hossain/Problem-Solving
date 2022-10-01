#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x,y;

} p[5];
int a,b,c,d,kase;
long c1,c2,c3,c4,kornoONe,kornoTwo;

bool Check(int d1, int c1, int d2, int c2)
{
    float  v1x,v1y,v2x,v2y;
    v1x = p[d1].x-p[c1].x;
    v1y = p[d1].y-p[c1].y;

    v2x = p[d2].x-p[c2].x;
    v2y = p[d2].y-p[c2].y;

    if ((-(v1x*v2y) + (v1y*v2x)) == 0)
        return true;

    return false;
}
void bahu()
{
    c1 = (long)(pow(p[a].x-p[b].x,2)+pow(p[a].y-p[b].y,2));
    c2 = (long)(pow(p[b].x-p[c].x,2)+pow(p[b].y-p[c].y,2));
    c3 = (long)(pow(p[c].x-p[d].x,2)+pow(p[c].y-p[d].y,2));
    c4 = (long)(pow(p[d].x-p[a].x,2)+pow(p[d].y-p[a].y,2));

    kornoONe = (long)(pow(p[a].x-p[c].x,2)+pow(p[a].y-p[c].y,2));
    kornoTwo = (long)(pow(p[b].x-p[d].x,2)+pow(p[b].y-p[d].y,2));
}
void Xcptn()
{
    long tmp1,tmp2,tmpx,tmpy;
    tmp1 = -(p[b].y-p[a].y);
    tmp2 = p[b].x-p[a].x;

    tmpx = (p[c].x-p[a].x)*tmp1 + (p[c].y-p[a].y)*tmp2;
    tmpy = (p[d].x-p[a].x)*tmp1 + (p[d].y-p[a].y)*tmp2;

    if ((tmpx>0 && tmpy<0) || (tmpx<0 && tmpy>0)) {
            a=1; b=3; c=2; d=4;
    }
    else{
        tmp1 = -(p[d].y-p[a].y);
        tmp2 = p[d].x-p[a].x;

        tmpx = (p[b].x-p[a].x)*tmp1 + (p[b].y-p[a].y)*tmp2;
        tmpy = (p[c].x-p[a].x)*tmp1 + (p[c].y-p[a].y)*tmp2;

        if ((tmpx>0 && tmpy<0) || (tmpx<0 && tmpy>0)){
            tmp1=c;
            c=d;
            d=tmp1;
        }
    }
}

void Run()
{
    a=1; b=2; c=3; d=4;
    Xcptn();
    bahu();

    if (c1==c3 && c2==c4){
        if (c1==c2){
            if (kornoONe==kornoTwo) {
                    cout<<"Case "<<kase++<<": Square"<<endl;
            return;
            }
            else{
                    cout<<"Case "<<kase++<<": Rhombus"<<endl;
            return;
            }
        }
        else{
            if (kornoONe==kornoTwo){
                    cout<<"Case "<<kase++<<": Rectangle"<<endl;
            return;
            }
            else{
                    cout<<"Case "<<kase++<<": Parallelogram"<<endl;
            return;
            }
        }
    }
    else if (Check(a,b,c,d) || Check(b,c,d,a)){
            cout<<"Case "<<kase++<<": Trapezium"<<endl;
    return;
    }
    else
     cout<<"Case "<<kase++<<": Ordinary Quadrilateral"<<endl;
     return;
}
void input(int t)
{
    kase=1;
    while(t--){
    for (int i=1;i<=4;i++)
        cin>>p[i].x>>p[i].y;
    Run();
    }
    kase=1;
}
main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin>>t;
        input(t);
    return 0;
}
