#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[15];
    int kase=1;
    while(gets(str)){
            if(strcmp(str,"#")==0)break;
        else if(strcmp(str,"HELLO")==0)
            cout<<"Case "<<kase++<<": "<<"ENGLISH"<<endl;

        else if(strcmp(str,"HOLA")==0)
            cout<<"Case "<<kase++<<": "<<"SPANISH"<<endl;

        else if(strcmp(str,"HALLO")==0)
            cout<<"Case "<<kase++<<": "<<"GERMAN"<<endl;

        else if(strcmp(str,"BONJOUR")==0)
            cout<<"Case "<<kase++<<": "<<"FRENCH"<<endl;

        else if(strcmp(str,"CIAO")==0)
            cout<<"Case "<<kase++<<": "<<"ITALIAN"<<endl;

        else if(strcmp(str,"ZDRAVSTVUJTE")==0)
            cout<<"Case "<<kase++<<": "<<"RUSSIAN"<<endl;
       else
           cout<<"Case "<<kase++<<": "<<"UNKNOWN"<<endl;;

    }
    return 0;
}
