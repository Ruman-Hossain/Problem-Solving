#include<iostream>
using namespace std;
int main()
{
    long long n,T,i;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>n;
    if(n==0)
        cout<<"NULL"<<endl;
    else if(n>0&&n%2==0)
        cout<<"EVEN POSITIVE"<<endl;
    else if(n>0&&n%2!=0)
        cout<<"ODD POSITIVE"<<endl;
    else if(n<0&&n%2==0)
        cout<<"EVEN NEGATIVE"<<endl;
    else if(n<0&&n%2!=0)
        cout<<"ODD NEGATIVE"<<endl;
    }
    return 0;
}
