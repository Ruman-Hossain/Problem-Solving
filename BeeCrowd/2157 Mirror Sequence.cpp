#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        for(int i=a;i<=b;i++)
            cout<<i;

        for(int i=b;i>=a;i--){
            int tmp=i;
            while(tmp!=0){
               int r=tmp%10;
                cout<<r;
                tmp=tmp/10;
            }
        }
        cout<<endl;
    }
    return 0;
}
