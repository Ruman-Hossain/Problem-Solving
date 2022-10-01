#include<bits/stdc++.h>
using namespace std;
#define max 10000001
long primes[max];
bool marks[max];
long long d;
int sieve()
{

    long long  i, j, k;
    memset(marks,true,max);
    marks[0] = marks[1] = false;
    for (i=4 ; i<max ; i+=2)
        marks[i]=false;
    for (i=3 ; i*i<max ; i+=2)
    {
        if (marks[i]==true)
        {
            for (j=i*i ; j<max; j+=(2*i))
                marks[j]=false;
        }
    }

    for (i=2, j=0 ; i<=max ; i++)
    {
        if (marks[i]==true)
        {
            primes[j++]=i;
        }
        d=j;

    }
   /* for(int i=0;i<100000;i++){
        if(primes[i]==0)break;
        cout<<primes[i]<<"  ";
    }
    */
}
int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    long long  n,cnt,mx;
    while((cin>>n)&&n){
            if(n<0)n=-n; //cout<<n<<endl;
            cnt=0;
        for(long long  i=0;i<d;i++){
                if(n<primes[i])break;
            if(n%primes[i]==0){
                mx=primes[i];
                cnt++;
               while(n%mx==0)n/=mx;
            }
        }
       // cout<<cnt<<endl;
       if(n!=1){
        mx=n;
        cnt++;
       }
       //cout<<cnt<<endl;
       if(cnt>1)cout<<mx<<endl;
       else cout<<"-1"<<endl;

    }

    return 0;
}
