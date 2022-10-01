//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416
#define MX 1000010
using namespace std;
char str[MX];
int a[MX];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,mn,mx;
    int kase=1;
    while(gets(str)){

        int l=strlen(str);
         if ( l == 0 ) break;
        a[0] = str[0]== '1' ? 1 : 0;

        for ( int i = 1; i < l; i++ )
            a[i]=str[i]=='1' ? a [i-1]+1 : a[i-1];

        cin>>n;
        cout<<"Case "<<kase++<<":"<<endl;
        while(n--){

            cin>>mn>>mx;
            if(mn>mx)
                swap(mn,mx);

                if(str[mn]=='0'&&str[mx]=='0'&&a[mx]-a[mn]==0)
                    cout<<"Yes"<<endl;

                else if(str[mn]=='1'&&str[mx]=='1'&&a[mx]-a[mn]==mx-mn)
                    cout<<"Yes"<<endl;

                else
                    cout<<"No"<<endl;


            }
        getchar();
    }

    return 0;
}
