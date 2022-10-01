#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ln,kase=1;
    string s;
    while(cin>>t){
        if(t==0)break;
        getchar();
        cout<<"Case "<<kase++<<":"<<endl;
        cout<<"#include<string.h>"<<endl;
        cout<<"#include<stdio.h>"<<endl;
        cout<<"int main()"<<endl<<"{"<<endl;
        for(int i=1;i<=t;i++){
            getline(cin,s);

            ln=sizeof(s);

            printf("printf(\"");
            for(int j=0;j<s.length();j++){
                if(s[j]=='\\' || s[j]=='"')
                    printf("\\%c",s[j]);
                else
                    printf("%c",s[j]);
            }
            printf("\\n\");\n");

        }
        printf("printf(\"\\n\");\nreturn 0;\n}\n");
    }
    return 0;
}
