#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    //for(i=0;i<4;i++)puts("str");
    char str[100];
   while(cin>>n){
    for(i=0;i<n;i++){
        scanf("%s",&str);

        int ln=strlen(str);
        if(ln==3&&str[0]=='O'&&str[1]=='B')
            cout<<"OBI";
        else if(ln==3&&str[0]=='U'&&str[1]=='R')
            cout<<"URI";
        else printf(str);
        if(i<n-1)cout<<" ";
        if(i==n-1)cout<<endl;
        }

    }
    return 0;
}
