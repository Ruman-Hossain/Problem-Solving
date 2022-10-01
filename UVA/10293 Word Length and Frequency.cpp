#include<bits/stdc++.h>
using namespace std;
#define mx 80
char line[mx];
int data[mx];
int main()
{
    memset(data,0,sizeof(data));
    int len=0;
    while(gets(line)){
        if(line[0]!='#'){
            int n=strlen(line);
            for(int i=0;i<n;i++){
                    char ch=line[i];
                if(isalpha(ch))
                    len++;
                else if(ch==' ' || ch=='?' || ch=='!' || ch==',' || ch=='.'){
                    data[len]++;
                    len=0;
                }
            }
            if(line[n-1]!='-'){
                data[len]++;
                len=0;
            }
            continue;
        }
        for(int i=1;i<mx;i++){
            if(data[i]){
                cout<<i<<" "<<data[i]<<endl;
            }
            data[i]=0;
        }
        cout<<endl;
    }

    return 0;
}
