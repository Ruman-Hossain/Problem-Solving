#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,i,m;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
                m=i*i;
          cout<<i<<"^2"<<" = "<<m<<endl;
        }

    }
    return 0;
}
