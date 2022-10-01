#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  n,data[128];
    cin>>n;
    int cnt=1,k=0,x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x==cnt){
            cnt++;
            data[k++]=i+2000;
        }
    }
    cout<<k<<endl;
    if(k){
        for(int i=0;i<k;i++){
                cout<<data[i];
                if(i!=k-1)
                    cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
