#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j;
    while(cin>>n){
        if(n==0)break;
        if(n<3 || n%2)
            cout<<"Impossible"<<endl;
        else{
            cout<<n+n/2 <<endl;
            for(i=1;i<n;i++)
                cout<<i<<" "<<i+1<<endl;
            cout<<n<<" "<<1<<endl;
            for(i=1;i<=n/2;i++)
                cout<<i<<" "<<i+n/2 <<endl;
        }
    }
    return 0;
}
