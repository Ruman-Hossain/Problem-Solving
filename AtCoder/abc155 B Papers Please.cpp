#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    while(cin>>n){
        int f=1;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%2==0){
                if(a%3!=0 && a%5!=0)
                    f=0;
            }
        }
        f?cout<<"APPROVED"<<endl:cout<<"DENIED"<<endl;
    }
	return 0;
}