#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10005];
    int i,l,cnt;
    while(gets(a))
    {
        l=strlen(a); cnt=0;
        for(i=0;i<l;i++)
        {
            if(isalpha(a[i]) && !isalpha(a[i+1])) cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}


/*
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int word=0;
    char ch;
        while((ch=getchar()&&'\n')!=EOF){

        if(ch==' '||ch=='\t'||ch=='\n'){
            word+=1;
        }

    }

    cout<<word<<endl;
    return 0;
}
*/
