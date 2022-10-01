#include<bits/stdc++.h>
using namespace std;
vector<int>divisor[3005];
int data[3005];
bool mark[3005];
void prime(){
    memset(mark,1,sizeof(mark));
    for(int i=2;i<=3000;i++){
        if(mark[i]==1){
            for(int j=i*i;j<=3000;j+=i){
                mark[j]=0;
            }
        }
    }
}
void seive(){
    prime();
    memset(data,0,sizeof(data));
    for(int i=2;i<3000;i++){
        for(int j=i;j<=3000;j+=i){
            if(mark[i]==1){
                divisor[j].push_back(i);
                data[j]++;
            }
        }
    }
}
int main()
{
    seive();
    int p;
    while(cin>>p){
    int cnt=0;
    if(p<5)cout<<"0"<<endl;
    else{
        for(int i=2;i<=p;i++){
            if(data[i]==2){
                    //cout<<i<<" ";
                cnt++;
            }
        }
        //cout<<"\nTotal Prime Divisor ";
        cout<<cnt<<endl;
        }
    }
    return 0;
}
