#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll balance=100;
  	ll target;
   while(cin>>target){
     int cnt=0;
   	while(balance<target){
    	balance+=balance/100;
       cnt++;
    }
     cout<<cnt<<endl;
   }
}