#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,cnt,x,y,i;
    while(cin>>k){
        cnt=0;
        for(i = k+1; i<=2*k;i++)
            if((i*k)%(i-k)==0)
                cnt++;
        cout<<cnt<<endl;
        for(i = k+1 ;i<=2*k; i++)
            if((i*k)%(i-k)==0)
                cout<<"1/"<<k<<" = 1/"<<(i*k)/(i-k)<<" + 1/"<<i<<endl;
    }

    return 0;
}
