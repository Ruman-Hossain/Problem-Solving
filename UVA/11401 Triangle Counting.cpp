#include<bits/stdc++.h>
using namespace std;
long arr[1000001];
int main()
{
    long  n,i,k=0;
    arr[3]=0;
    for(i=4;i<1000001;i++){
            //k+=(i-2)/2, arr[i]=arr[i-1]+k;
        arr[i]=arr[i-1]+((i-1)*(i-2)/2-(i-1)/2)/2;
    }
    while(cin>>n){
            if(n<3)break;
       cout<<arr[n]<<endl;
    }

    return 0;
}
