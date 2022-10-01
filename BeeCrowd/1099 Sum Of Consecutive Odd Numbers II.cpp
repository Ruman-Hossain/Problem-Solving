#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,rslt;
    while(cin>>n){
            if(n==0)break;

    while(n--){
        cin>>x>>y;
        rslt=0;
        if(x>y)
            swap(x,y);
        for(i=x+1;i<y;i++){
            if(i%2!=0){
                rslt+=i;
            }
        }
        cout<<rslt<<endl;
        }
    }
    return 0;
}
