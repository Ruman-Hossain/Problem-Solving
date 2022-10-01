#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i;
    char str[100000];
    cin>>n;
    while(n--){
        scanf("%s",&str);
        sum=0;
        int ln=strlen(str);
        for(i=0;i<ln;i++){
            switch(str[i]){
        case '1':
            sum+=2;
            break;
        case '2':
        case '3':
        case '5':
            sum+=5;
            break;
        case '4':
            sum+=4;
            break;
        case '6':
        case '9':
        case '0':
            sum+=6;
            break;
        case '7':
            sum+=3;
            break;
        case '8':
            sum+=7;
            break;
            }
        }
        cout<<sum<<" leds"<<endl;
    }
    return 0;
}
