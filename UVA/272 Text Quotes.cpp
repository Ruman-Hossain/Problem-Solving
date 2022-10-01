#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int cnt;
    char ch;
    cnt=0;
    while((ch=getchar())!=EOF){
        if(ch=='"'){
            cnt++;
            if(cnt%2!=0)cout<<"``";
            else
            cout<<"''";

        }
        else{
            cout<<ch;
        }

    }

    return 0;
}
