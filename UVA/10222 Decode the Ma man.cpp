#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
const char keyboard[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
       //freopen("input.txt","r",stdin);
       //freopen("output.txt","w",stdout);


       char ch;
       while (scanf("%c",&ch) != EOF){
        ch = tolower(ch);

        if (isspace(ch)) cout<<ch;
        else{
            for(int i=0;keyboard[i];i++)
                if(ch==keyboard[i]){
                  cout<<keyboard[i-2];
                break;
            }
        }
       }



       /*
    char ch;
    while((ch=getchar())){

        if(ch==']')cout<<"p";
        else if(ch=='[')cout<<"o";
        else if(ch=='p'||ch=='P')cout<<"i";
        else if(ch=='o'||ch=='O')cout<<"u";
        else if(ch=='i'||ch=='I')cout<<"y";
        else if(ch=='u'||ch=='U')cout<<"t";
        else if(ch=='y'||ch=='Y')cout<<"r";
        else if(ch=='t'||ch=='T')cout<<"e";
        else if(ch=='r'||ch=='R')cout<<"w";
        else if(ch=='e'||ch=='E')cout<<"q";



        else if(ch==';')cout<<"k";
        else if(ch=='l'||ch=='L')cout<<"j";
        else if(ch=='k'||ch=='K')cout<<"h";
        else if(ch=='j'||ch=='J')cout<<"g";
        else if(ch=='h'||ch=='H')cout<<"f";
        else if(ch=='g'||ch=='G')cout<<"d";
        else if(ch=='f'||ch=='F')cout<<"s";
        else if(ch=='d'||ch=='D')cout<<"a";

        else if(ch=='/')cout<<',';
        else if(ch=='.')cout<<"m";
        else if(ch==',')cout<<"n";
        else if(ch=='m'||ch=='M')cout<<"b";
        else if(ch=='n'||ch=='N')cout<<"v";
        else if(ch=='b'||ch=='B')cout<<"c";
        else if(ch=='v'||ch=='V')cout<<"x";
        else if(ch=='c'||ch=='C')cout<<"z";

        else if(ch==' '||ch=='E')cout<<" ";


        cout<<endl;

    }

    */

    return 0;

}
