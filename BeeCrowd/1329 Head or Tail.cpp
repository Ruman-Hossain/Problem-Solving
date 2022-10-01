#include<iostream>
using namespace std;
int main()
{
    int n,a[10005],i,m=0,j=0;
    while((cin>>n)&&n!=0){
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)
            m+=1;
        if(a[i]==1)
            j+=1;
        }
        cout<<"Mary won "<<m<<" times and John won "<<j<<" times"<<endl;
        m=0,j=0;
    }

    return 0;
}
