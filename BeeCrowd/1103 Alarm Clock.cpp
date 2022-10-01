#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int h,h1,h2,m,m1,m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        else{
            h=h2-h1;
            m=m2-m1;
        }
        if(m<0){
            m=m+60;
            h=h-1;
        }
        if(h<0){
            h=h+24;
        }
        int rslt=h*60+m;
        cout<<rslt<<endl;
    }
    return 0;
}
