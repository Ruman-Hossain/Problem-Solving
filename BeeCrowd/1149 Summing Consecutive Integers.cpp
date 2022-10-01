#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{

    int A,N;
    while(cin>>A){
        cin>>N;
        int count=0;
        while(N<=0)cin>>N;
        int i,sum=0;
        for( i=A;;i++){
            sum+=i;
            count++;
            if(count==N)break;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
