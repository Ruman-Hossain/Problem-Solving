#include<iostream>
long long factorial(long long n);
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b){
    cout<<factorial(a)+factorial(b)<<endl;
    }
    return 0;
}
long long factorial(long long n)
{
    if(n==0||n==1)
        return 1;
    else return n*factorial(n-1);
}
