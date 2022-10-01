#include<iostream>
using namespace std;
int main()
{
    int A,B,a,b,i,c;
    cin>>A>>B;
    if(A>B)a=B,b=A;
    else
        a=A,b=B;

    c=a+1;
    for(i=c;i<b;i++){
        if(i%5==2||i%5==3)
            cout<<i<<endl;
    }
    return 0;
}
