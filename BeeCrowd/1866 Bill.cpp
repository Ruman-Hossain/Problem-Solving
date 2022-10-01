#include<iostream>
using namespace std;
int main()
{
    long long n,a[100],i,j;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>a[j];
        if(a[j]%2==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
