#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        float x,y,r,sr;
        cin>>x>>y>>r;
        sr=sqrt(x*x+y*y);

        printf("%0.2f %0.2f\n",r-sr,r+sr);
    }
    return 0;
}
