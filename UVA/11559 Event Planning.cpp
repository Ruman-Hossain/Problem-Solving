#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nmbr,budget,nHotels,nWeeks,perPrsnPrice;
    while(cin>>nmbr>>budget>>nHotels>>nWeeks){
        int minimum=1e9;
       for(int i=0;i<nHotels;i++){
        cin>>perPrsnPrice;
        for(int j=0;j<nWeeks;j++){
                int x;
            cin>>x;
            if(x>=nmbr)
                minimum = min( minimum, nmbr*perPrsnPrice);
            }
         }
         if(minimum>budget)
            cout<<"stay home"<<endl;
         else
            cout<<minimum<<endl;
    }
    return 0;
}
