#include<bits/stdc++.h>
using namespace std;
bool compare(char a,char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    return tolower(a)<tolower(b);
}
int main()
{

    int n;
    char str[1000];
    scanf("%d\n",&n);
   for(int i=0;i<n;i++){
        cin>>str;
            sort(str,str+strlen(str),compare);
            cout<<str<<endl;
        while(next_permutation(str,str+strlen(str),compare))
        {
            cout<<str<<endl;
        }
    }
}
