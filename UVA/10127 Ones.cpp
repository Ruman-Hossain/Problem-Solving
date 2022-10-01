#include<bits/stdc++.h>
using namespace std;
#define mx 10010
int main()
{

   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   double oneS,nmbr,rslt;
   long long i;
   while(cin>>nmbr){
    oneS = 1;
    int cnt=1;
    bool flag=0;
    while(flag==0)
        if(fmodl(oneS,nmbr)==0){
            flag=1;
            break;
        }
        else{
            oneS = oneS * 10  + 1;
            cnt++;
            oneS = fmodl(oneS, nmbr);
        }
    cout<<cnt<<endl;
   }

    return 0;
}
