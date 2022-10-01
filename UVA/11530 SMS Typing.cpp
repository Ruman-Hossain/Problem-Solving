#include<bits/stdc++.h>
using namespace std;
int main()
{


    //freopen("input.txt","r",stdin);
    int n,i;
    int kase=1;
    char s[111];
    scanf("%d",&n);
    gets(s);
   while(kase<=n){
        gets(s);
     int cnt=0;
    for(i=0;s[i]!=NULL;i++){

        if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
               cnt+=1;

        else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
                cnt+=2;

        else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
                cnt+=3;

        else if(s[i]=='s'||s[i]=='z')
                cnt+=4;


      /*  switch(s[i]){
    case 'a':
    case 'd':
    case 'g':
    case 'j':
    case 'm':
    case 'p':
    case 't':
    case 'w':
    case ' ':
        cnt+=1;
        break;

    case 'b':
    case 'e':
    case 'h':
    case 'k':
    case 'n':
    case 'q':
    case 'u':
    case 'x':
        cnt+=2;
        break;

    case 'c':
    case 'f':
    case 'i':
    case 'l':
    case 'o':
    case 'r':
    case 'v':
    case 'y':
        cnt+=3;

    case 's':
    case 'z':
        cnt+=4;
        break;

        }
        */
    }
    cout<<"Case #"<<kase<<": "<<cnt<<endl;
    kase++;
   }
    return 0;
}
