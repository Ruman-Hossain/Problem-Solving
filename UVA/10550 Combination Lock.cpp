#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,rslt;
    while((cin>>n>>a>>b>>c)){
            if(n==0&&a==0&&b==0&&c==0) break;
        rslt = 1080;
        rslt += (n - a) > 0 ? (n - a) * 9 : (n - a + 40) * 9;
        rslt += (b - a) > 0 ? (b - a) * 9 : (b - a + 40) * 9;
        rslt += (b - c) > 0 ? (b - c) * 9 : (b - c + 40) * 9;

        cout<<rslt<<endl;
    }

    return 0;
}
