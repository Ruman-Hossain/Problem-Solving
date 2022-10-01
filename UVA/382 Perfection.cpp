#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,temp,sum;
    int k=0;
    while((cin>>n)){
            sum=0;
            temp=n;
            if(k==0)cout<<"PERFECTION OUTPUT"<<endl;
           if(n==0){
                cout<<"END OF OUTPUT"<<endl;
                break;
           }
            m=(n/2);

        for(i=1;i<=m;i++){
            if(temp%i==0)
                sum+=i;
        }
    if(sum==n)
        printf("%5d  PERFECT\n",n);
    else if(sum<n)
        printf("%5d  DEFICIENT\n",n);
    else
        printf("%5d  ABUNDANT\n",n);

    k++;

    }

    return 0;
}
