#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c){
    if(a==0&&b==0&&c==0)
        break;
    else
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
