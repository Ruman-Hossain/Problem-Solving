#include<iostream>
#include<cmath>
int fibonacci(int n);
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
            if(i<=(n-2))
    cout<<fibonacci(i)<<" ";
    else
        cout<<fibonacci(i)<<endl;
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
