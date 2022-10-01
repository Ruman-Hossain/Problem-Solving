#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],i;
    int kase=1;
    while((cin>>n)&&n!=0){
            int sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int avg=sum/n;
        int rslt=0;
        for(i=0;i<n;i++){
            if(a[i]>avg){
                rslt+=(a[i]-avg);
            }
        }
        cout<<"Set #"<<kase++<<endl;
        cout<<"The minimum number of moves is "<<rslt<<"."<<endl<<endl;
    }
    return 0;
}
