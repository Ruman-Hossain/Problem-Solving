#include<bits/stdc++.h>
using namespace std;
int main()
{

     //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    double d,v,u;
    cin>>t;
    int kase=1;
    while(t--){
        cin>>d>>v>>u;
        if(v==0||u==0||v>=u){
                   cout<<"Case "<<kase++<<": can't determine"<<endl;
            continue;

        }
        else{
            double t1= (1.0*d)/(u*1.0);
            double t2= (1.0*d)/(sqrt((u*u)-(v*v))*1.0);
            double rslt=abs(t2-t1);
            cout<<"Case "<<kase++<<": ";
            printf("%0.3lf\n",rslt);
            }
        }
    return 0;
}
