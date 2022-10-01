#include<iostream>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    for(i=1;i<=10000;i++)
        if(i%n==2)
        cout<<i<<endl;
    return 0;
}
