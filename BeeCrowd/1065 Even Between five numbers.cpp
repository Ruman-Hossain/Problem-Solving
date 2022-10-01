#include<iostream>
using namespace std;
int main()
{
    int n[5],i,count=0;
    for(i=0;i<5;i++){
        cin>>n[i];
        if(n[i]%2==0)
        count+=1;
    }
    cout<<count<<" valores pares"<<endl;
    return 0;
}
