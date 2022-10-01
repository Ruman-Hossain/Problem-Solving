#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m,f;
    cin>>n;
    getchar();
    while(n--)
    {

        string str;
        getline(cin,str);
        m=f=0;
        int ln=str.size();
        for(int i=0;i<ln;i++)
        {
            if(str[i]=='M')
                m++;
            else if(str[i]=='F')
                f++;
        }
        if(f==m && ln>2)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }

        return 0;
}
