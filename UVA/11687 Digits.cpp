#include<bits/stdc++.h>
using namespace std;

int main()
{

    char str[1000005];
    int ln,indx,last;
    while(scanf("%s",&str)){
        if(strcmp(str, "END")==0)
            break;
        ln = strlen(str);
        indx=1;

        while(true){
            if(ln==1 && str[0]=='1')
                break;

            sprintf(str,"%d",ln);
            // vale print korar jonno noy brong full string ta tar  length value diye replace korar jonno

            last = ln;
            ln=strlen(str);
            indx++;

            if(last==ln)
                break;
        }
        cout<<indx<<endl;
    }
    return 0;
}
