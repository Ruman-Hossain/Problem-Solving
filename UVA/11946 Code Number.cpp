#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t, i;
    char str[100];
    char a[10] = {'O','I','Z','E','A','S','G','T','B','P'};
    scanf("%d ", &t);
    while(t--) {
        while(gets(str)) {
            if(str[0] == '\0')
                break;
            for(i = 0; str[i]; i++) {
                if(str[i] >= '0' && str[i] <= '9')
                    str[i] = a[str[i]-'0'];
            }
            puts(str);
        }
        if(t)
            cout<<endl; //puts("");
    }
    return 0;
}
