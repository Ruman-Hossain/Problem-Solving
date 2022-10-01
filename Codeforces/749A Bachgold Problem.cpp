#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n){
        if(n%2==0){
            int k=n/2;
            cout<<k<<endl;
            for(int i=0;i<k;i++){
                cout<<"2";
                if(i!=k-1)
                    cout<<" ";
            }
        }
        else{
            int k=n/2 -1;
            cout<<k+1<<endl;
            for(int i=0;i<k;i++){
                cout<<"2 ";
            }
            cout<<"3";
        }
        cout<<endl;
    }
    return 0;
}