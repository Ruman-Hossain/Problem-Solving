#include<bits/stdc++.h>
using namespace std;
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    vector<string>v;
    map<string,int>m;
    cin>>n;
    while(true)
    {
        string str,str2;
        v.clear();
        m.clear();
        for(int i=0;i<n;i++)
        {
            cin>>str;
            v.push_back(str);
        }
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>str>>a>>b;

            if(b!=0)
                m[str]-=b*(a/b);
                for(int j=0;j<b;j++)
                {
                    cin>>str2;
                    m[str2] +=a/b;
                }

        }
        for(int i=0;i<n;i++)
            cout<<v[i]<<" "<<m[v[i]]<<endl;

        if(cin>>n)cout<<endl;
        else break;
    }
    return 0;
}
