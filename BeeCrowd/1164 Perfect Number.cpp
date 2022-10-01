#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long t,n,i,j,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        sum=0;
    for(j=1;j<n/2 +1;j++){
        if(n%j==0){
            sum+=j;
        }
    }
        if(sum!=n){
            cout<<n<<" nao eh perfeito"<<endl;
        }
        else
            cout<<n<<" eh perfeito"<<endl;
    }

    return 0;
}
