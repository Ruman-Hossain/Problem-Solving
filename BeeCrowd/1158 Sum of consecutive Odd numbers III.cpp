#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    int n,x,y,i ,j,sum;
    cin>>n;
    while(n--){
        cin>>x>>y;
        j=0,sum=0;
        i=x;
        for(;;i++){
                if(i%2!=0){
                    sum+=i;
                    j++;
                    if(j==y)break;
                }

        }

    cout<<sum<<endl;

    }

    return 0;
}
