#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    char n[30],ch;
    while (1)
    {
        scanf("%d %s",&s,n);
        if (s==0 && n[0]=='0') break;
        int l=strlen(n);
        for (int i=0;i<l;i++)
        {
            if (i) cout<<" ";
            cout<<" ";
            if (n[i]=='1' || n[i]=='4') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) cout<<ch;
            cout<<" ";
        }
        cout<<endl;
        for (int k=0;k<s;k++)
        {
            for (int i=0;i<l;i++)
            {
                if (i) cout<<" ";
                if (n[i]=='1' || n[i]=='2' || n[i]=='3' || n[i]=='7')
                cout<<" ";
                else cout<<"|";
                for (int j=0;j<s;j++) cout<<" ";
                if (n[i]=='5' || n[i]=='6') cout<<" ";
                else cout<<"|";
            }
            cout<<endl;
        }
        for (int i=0;i<l;i++)
        {
            if (i) cout<<" ";
            cout<<" ";
            if (n[i]=='0' || n[i]=='1' || n[i]=='7') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) cout<<ch;
            cout<<" ";
        }
        cout<<endl;
        for (int k=0;k<s;k++)
        {
            for (int i=0;i<l;i++)
            {
                if (i) cout<<" ";
                if (n[i]=='0' || n[i]=='2' || n[i]=='6' ||n[i]=='8')
                cout<<"|";
                else cout<<" ";
                for (int j=0;j<s;j++) cout<<" ";
                if (n[i]=='2') cout<<" ";
                else cout<<"|";
            }
           cout<<endl;
        }
        for (int i=0;i<l;i++)
        {
            if (i) cout<<" ";
            cout<<" ";
            if (n[i]=='1' || n[i]=='4' || n[i]=='7') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) cout<<ch;
            cout<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
