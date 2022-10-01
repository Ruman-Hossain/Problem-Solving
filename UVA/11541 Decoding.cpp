#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,i,n;
    char st;
    char tmp;
    scanf("%d", &t);
    getchar();
    int kase=1;
    while(t--){

        cout<<"Case "<<kase++<<": ";
        while((scanf("%c",&st))&&st!='\n'){
                scanf("%d", &n);
            tmp=st;

           for(i=0;i<n;i++){
            cout<<tmp;

            }
          }
          cout<<endl;

        }


    return 0;
}
