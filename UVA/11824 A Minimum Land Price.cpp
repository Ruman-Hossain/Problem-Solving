#include<bits/stdc++.h>
using namespace std;
#define ull long long

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ull t,data[50];
    cin>>t;

    while(t--)
    {
        ull k=0,rslt=0,b;
        while(cin>>b)
        {
            if(b==0)
                break;
            data[k++]=b;
        }
        sort(data,data+k,greater<int>());

        for(int i=0;i<k;i++)
        {

            ull pv = (2*pow(data[i],i+1));
             rslt+= pv;
            if(rslt >5000000)
                break;
        }
        if(rslt>5000000)
            cout<<"Too expensive"<<endl;
        else
            cout<<rslt<<endl;
    }

        return 0;
}
