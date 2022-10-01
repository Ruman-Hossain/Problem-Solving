#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    long ugly[1500];
    ugly[1]=1;
    i=2;
    for(n=2;n<=1500;){
            int nmbr=i;
        while(nmbr%2==0){
            nmbr/=2;
           }
           while(nmbr%3==0){
            nmbr/=3;
           }
           while(nmbr%5==0){
            nmbr/=5;
           }
           if(nmbr==1){
            ugly[n]=i;
            n++;
           }
           i++;
        }

    cout<<"The 1500'th ugly number is "<<ugly[1500]<<"."<<endl;


    //result is found from the above codes execution
    cout<<"The 1500'th ugly number is 859963392."<<endl;
    return 0;
}
