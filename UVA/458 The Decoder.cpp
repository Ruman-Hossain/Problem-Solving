#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='\n')
            printf("\n");
        else
            printf("%c",ch-7);
    }
    return 0;
}
