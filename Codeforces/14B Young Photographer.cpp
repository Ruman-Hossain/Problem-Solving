#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1005],b[1005];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i] > b[i]){
            int tmp=a[i];
            a[i]=b[i];
            b[i]=tmp;
        }
    }
    sort(a,a+n);
    sort(b,b+n);
    if(a[n-1]<=b[0]){
        if(x<a[n-1])
            cout<<a[n-1]-x<<endl;
        else if(x>b[0])
            cout<<x-b[0]<<endl;
        else
            cout<<"0"<<endl;
      }
      else
        cout<<"-1"<<endl;


    return 0;
}
