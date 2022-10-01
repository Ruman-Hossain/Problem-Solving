#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,x,z;
    cin>>x;
    do{
        cin>>z;
    }
    while(x>=z);
    for(a=x,b=0; b<z; a++)
    {
        b+=a;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
