#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define max 1000000
int prime[max];

int sieve()

{


    prime[0]=prime[1]=true;
    prime[2]=false;
    for(ll i=4;i<=max;i+=2)
        prime[i]=true;
        int m=sqrt(max);
        for(long long int i=3;i<=m;i+=2){
            if(!prime[i]){
                for(ll j=i*i;j<=1000000;j+=(i+i))
                    prime[j]=true;
            }

        }
}

int main()
{
    sieve();
    long long  n;
    while((cin>>n)&&n){
        int a,b;
        if(n>=6&&n<1000000&&n%2==0){
        for(int a=2;a<n;a++){
            b=n-a;

            if(!prime[b]&&!prime[a]){
                cout<<n<<" = "<<a<<" + "<<b<<endl;;
                break;
                }
             }
        }

        else
            cout<<"Goldbach's conjecture is wrong"<<endl;
    }
    return 0;
}
