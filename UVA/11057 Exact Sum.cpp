#include<bits/stdc++.h>
using namespace std;
vector<int>in;
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,a,p,i,j;
    int x,y;

    while(cin>>n){
            int mind=1000001;
    for(i=0;i<n;i++){
            cin>>a;
        in.push_back(a);
    }
    cin>>p;
    sort(in.begin(),in.end());
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(in[i]+in[j]==p&&abs(in[i]-in[j])<mind){
                x=in[i];
                y=in[j];
               // mind=abs(in[i]-in[j]);

            }
        }
    }

   cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl;
   cout<<endl;
   in.clear();
    }


    return 0;
}
