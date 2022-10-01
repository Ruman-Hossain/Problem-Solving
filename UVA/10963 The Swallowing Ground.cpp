#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,up,down,d;
    cin>>t;
    while(t--){
        cin>>n;
           bool flag=true;
           //cout<<"flag = "<<flag<<endl;
            cin>>up>>down;
            d=up - down;
            //cout<<"d = "<<d<<endl;
            for(int i=0;i<n-1;i++){
                cin>>up>>down;
                if(d!=up - down)
                    flag=false;
                   // cout<<" flag = "<<flag<<endl;
            }
            if(flag)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
            if(t)
                cout<<endl;

    }

    return 0;
}
