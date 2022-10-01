#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;
void divide(char str[],long long n)
{
    long long  r=0,i,j=0;
    int flag=1;
    for(i=0;i<strlen(str);i++)
    {
        r=str[i]-'0'+r*10;
        if(r/n!=0)
        flag=0;
        if(!flag)
        cout<<r/n;
        r=r%n;
    }
    if(flag)
    cout<<"0";
    cout<<endl;
}
void mod(char str[] ,long long n)
{
     int   r=0,i;
    for(i=0;str[i];i++){
        r=(r*10+str[i]-'0')%n;
    }
    cout<<r<<endl;
}
int main()
{
    //freopen("intput.txt","r",stdin);
    char str[100000],op[2];
    long long i,n,rslt;
    while(cin>>str>>op>>n){
        if(strcmp(op,"/")==0)
            divide(str,n);
        if(strcmp(op,"%")==0)
            mod(str,n);

    }
    return 0;
}
