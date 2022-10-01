#include<bits/stdc++.h>
using namespace std;
void factors(long n)
{
    int flag=1;
    while(n%2==0){
        if(flag){
            cout<<"2";
            flag=0;
        }
        else{
            cout<<" x 2";
        }
        n=n/2;
    }
    long i=3;
    long m=sqrt(n)+1;
    while(i<=m){
        if(n%i==0){
            if(flag){
                cout<<i;
                flag=0;
            }
            else{
                cout<<" x "<<i;
            }
            n/=i;
        }
        else{
            i+=2;
        }
    }
    if(n>1){
        if(flag){
            cout<<n;

        }
        else{
            cout<<" x "<<n;
        }
    }

}

int main()
{
    long q;
    while(true){
        cin>>q;
        if(q==0)break;
        cout<<q<<" = ";
        if(q<0){
            cout<<"-1 x ";
            q=-q;
        }
        factors(q);
        cout<<endl;
    }

    return 0;
}
