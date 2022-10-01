#include<bits/stdc++.h>
using namespace std;
/*
void WordCounting(char *str)
{
    int word=0,flag=1;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]== ' ')
            flag=1;
        else{
            if(flag==1){
                word++;
                flag=0;
            }
        }
    }
    cout<<"Number of Words: "<<word<<endl;
}
void ReverseWord(char *str)
{
    cout<<"Reverse order (word-by-word):";
    strrev(str);
    for(int i=0;str[i]!='\0';i++)
    {
       if(str[i+1]==' ' || str[i+1]==NULL)
       {
           for(int j=i;j>=0 && str[j]!=' ';j--)
            printf("%c",str[j]);
       }
       printf(" ");
    }
    cout<<endl;

}
void ReverseChar(char *str)
{

    cout<<"Reverse order (character-by-character):";
    for(int i=strlen(str)-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;
}
void VowelConsonant(char *str)
{
    int v=0,c=0;
    for(int j=0;j<strlen(str);j++){
    switch(str[j]){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            v++;
            break;

        default:
            if(str[j]>='a'&& str[j]<='z' || (str[j] >='A' && str[j] <='Z'))
            c++;
            break;

        }
    }
        cout<<"VOWEL="<<v<< " and "<<"CONSONANT="<<c<<endl;

}
*/
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    /*
    char  str[1000];
    char st[1000];
    int n;
    //gets(str);
    //strcpy(st,str);
    */
    int a,b;
    while(cin>>a>>b){
        int cnt=0;
        while(a<=b){
            a*=3;
            b*=2;
            cnt++;
        }
    cout<<cnt<<endl;
    }
    /*
    WordCounting(str);
    ReverseWord(st);
    ReverseChar(str);
    VowelConsonant(str);
    */
    return 0;

}
