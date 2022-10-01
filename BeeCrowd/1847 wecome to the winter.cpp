#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    if(a>b){
        if(b>c){
            if((b-c)<(a-b))
                cout<<":)"<<endl;
            else
                cout<<":("<<endl;
        }
        else
            cout<<":)"<<endl;
    }
    else if(b>a){
        if(c>b){
            if((c-b)<(b-a))
                cout<<":("<<endl;
            else
                 cout<<":)"<<endl;
        }
        else
            cout<<":("<<endl;
    }
    else if(c>b)
         cout<<":)"<<endl;
    else
        cout<<":("<<endl;

    }

    return 0;
}
