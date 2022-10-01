#include<iostream>
using namespace std;
int main()
{
    long long n,a[10000],i,in=0,out=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=10&&a[i]<=20){
            in+=1;
        }
        else if(a[i]<10||a[i]>20){
            out+=1;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}
