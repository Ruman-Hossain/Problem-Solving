#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int dgt,upr,lwr,lnth;
    int i;
    char c;

            lnth=0;
            dgt=0;
            upr=0;
            lwr=0;


    while((c=getchar())!='\n'){
    lnth++;

        if(c>='a'&&c<='z')lwr++;
        else if(c>='A'&&c<='Z')upr++;
        else if(c>='0'&&c<='9')dgt++;


    }
    //cout<<lnth<<" "<<lwr<<" "<<upr<<" "<<dgt<<endl;
     if(lnth>=5&&lnth<=100){
            if(lwr>0&&upr>0&&dgt>0)
        cout<<"Correct"<<endl;
    else
        cout<<"Too weak"<<endl;
     }
     else cout<<"Too weak"<<endl;

    return 0;
}
