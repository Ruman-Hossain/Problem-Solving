#include<bits/stdc++.h>
using namespace std;
#define cclr(a) memset(a,NULL,sizeof(a))
#define max 100000
int main()
{
    int a,b,i,j;
    char str[max],mirror[max];

    cclr(mirror);
    mirror['A']='A';
    mirror['E']='3';
    mirror['H']='H';
    mirror['I']='I';
    mirror['J']='L';
    mirror['L']='J';
    mirror['M']='M';
    mirror['O']='O';
    mirror['S']='2';
    mirror['T']='T';
    mirror['U']='U';
    mirror['V']='V';
    mirror['W']='W';
    mirror['X']='X';
    mirror['Y']='Y';
    mirror['Z']='5';
    mirror['1']='1';
    mirror['2']='S';
    mirror['3']='E';
    mirror['5']='Z';
    mirror['8']='8';

    while(cin>>str){
        a=b=1;
        int ln=strlen(str);

        int hi = ln/2;
        if(ln & 1)
            hi++;

        for(i=0,j=ln-1;i<hi;i++,j--){
            if(a){
                if(str[i]!=str[j])
                    a=0;
            }
            if(b){
                if(mirror[str[i]] !=str[j])
                    b=0;
            }
        }
        if(a && b)
            cout<<str<<" -- is a mirrored palindrome."<<endl;
        else if(a)
            cout<<str<<" -- is a regular palindrome."<<endl;
        else if(b)
            cout<<str<<" -- is a mirrored string."<<endl;
        else
            cout<<str<<" -- is not a palindrome."<<endl;

        cout<<endl;
    }

    return 0;
}
