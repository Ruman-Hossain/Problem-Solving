#include<bits/stdc++.h>
using namespace std;
#define ul unsigned long
int main()
{
    ul n,a,b,i;
    char s[100005];
    while(cin>>n>>a>>b){
        cin>>s;
        ul rslt=0;
        //cout<<s<<endl;

            if(s[a-1]==s[b-1])
                rslt=0;
            else{
                rslt=1;
            }

       cout<<rslt<<endl;
    }

    return 0;
}
