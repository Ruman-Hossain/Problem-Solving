#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase,i;
    char ch;
    double Molar_Mass,NumberOfAtoms,PrimaryAtomicMass;
    char s[10];
    cin>>TestCase;
    for(int t=0;t<TestCase;t++){
    cin>>s;
    Molar_Mass=0,PrimaryAtomicMass=0;;
    for(i=0;i<strlen(s);i++){
        if(isupper(s[i])){
        ch=s[i];
        switch(ch){
        case 'C':
            PrimaryAtomicMass=12.01;
            break;
        case 'H':
            PrimaryAtomicMass=1.008;
            break;
        case 'O':
            PrimaryAtomicMass=16.00;
            break;
        case 'N':
            PrimaryAtomicMass=14.01;
            break;
         }
         NumberOfAtoms=0;
        }
        while(isdigit(s[i])){
            NumberOfAtoms=NumberOfAtoms*10+s[i]-'0';
            if(!isdigit(s[i+1]))
                break;
            else
                i++;
        }
        if(NumberOfAtoms!=0)
            Molar_Mass+=NumberOfAtoms*PrimaryAtomicMass;
        else if(isupper(s[i+1])||i==strlen(s)-1)
            Molar_Mass+=PrimaryAtomicMass;
    }
    printf("%0.3lf\n",Molar_Mass);
    }
    return 0;
}
