#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
const char keyboard[] =  "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
       //freopen("input.txt","r",stdin);
       //freopen("output.txt","w",stdout);


       char ch;
       while (scanf("%c",&ch) != EOF){
        ch = toupper(ch);

        if (isspace(ch)) cout<<ch;
        else{
            for(int i=0;keyboard[i];i++)
                if(ch==keyboard[i]){
                  cout<<keyboard[i-1];
                break;
            }
        }
       }


    return 0;
}
