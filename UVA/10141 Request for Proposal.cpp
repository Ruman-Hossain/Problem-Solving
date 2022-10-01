#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,r,cnt,rqMt,rm;
    double price,p;
    string x,name,nam;
    cnt=0;
    while((cin>>r>>n),r||n)
    {
        cnt++;
        price=2000000000;
        rqMt = -1;

        for(int i=0;i<r;i++)
        {
            cin.ignore();
            getline(cin,x);
        }
        while(n--)
        {
            getline(cin,nam);
            cin>>p>>rm;
            getchar();
            if(rm>rqMt)
            {
                rqMt = rm;
                name=nam;
                price=p;
            }
            else if(rm==rqMt && p < price)
            {
                rqMt = rm;
                name=nam;
                price=p;
            }
            for(int i=0;i<rm;i++)
            {
                getline(cin,x);
            }
        }
        if(cnt>1)
            cout<<endl;
        cout<<"RFP #"<<cnt<<endl;
        cout<<name<<endl;
    }

    return 0;
}
