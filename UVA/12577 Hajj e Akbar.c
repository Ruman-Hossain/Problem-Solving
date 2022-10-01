#include<stdio.h>
int main()

{
    int i=1;
    char ch;
    while(scanf("%c",&ch)){
    if(ch!='*'){
        if(ch=='H')
            printf("Case %d: Hajj-e-Akbar\n",i++);

        else if(ch=='U')
            printf("Case %d: Hajj-e-Asghar\n",i++);
            }
    else
        break;
    }

    return 0;
}
