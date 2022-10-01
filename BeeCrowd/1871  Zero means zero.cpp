#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,r;
    vector<int>n;
    while(cin>>a>>b){
        if(a==0&&b==0)
            break;
        sum=a+b;
        int ln=0;
        while(sum!=0){
            r=sum%10;
            n.push_back(r);
            ln++;
            sum=sum/10;
        }
        for(int i=ln-1;i>=0;i--)
            if(n[i]!=0)
                cout<<n[i];

        cout<<endl;
        n.clear();
        sum=0;
    }
    return 0;
}
