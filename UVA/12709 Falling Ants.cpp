#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,l,w,h,v,mx;
    while((cin>>n)&&n)
    {
        v=mx=0;
        while(n--)
        {
            cin>>l>>w>>h;
            if(mx<h)
            {
                mx=h;
                v=l*w*h;
            }
            else if(mx==h)
            {
                v=max(v,l*w*h);
            }
        }
        cout<<v<<endl;
    }
        return 0;
}
