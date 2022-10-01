#include<bits/stdc++.h>
using namespace std;
int palindrome(char str[],int ln){
    //cout<<str<<endl;
    int i=0,j=ln-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else
            return 0;
    }
    //cout<<"---------->Palindrome"<<endl;
    return 1;
}
int makepal(char left[],char right[],int ln){
    int i=0,j=ln-1;
    while(i<=ln-1){
        if(left[i]==right[j]){
            i++;
            j--;
        }else return 0;
    }
    return 1;
}
int main()
{
    //freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int m,n;


    while(cin>>n>>m){
        //cin>>n>>m;
        char str[105][105];
        memset(str,0,sizeof(str));
        string left="",right="",mid="";
        cin.ignore();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>str[i][j];
            }
        }

        int check=0;
        int a[n+1]={0};
        for(int i=0;i<n;i++){
            //cout<<"Got String :"<<str[i]<<endl;
            if(check!=1){
                if(palindrome(str[i],m)==1){
                    mid+=str[i];
                    a[i]=1;
                    check=1;
                }
                //cout<<mid<<endl;
            }else break;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(!a[i] && makepal(str[i],str[j],m)){
                    left+=str[i];
                    right=str[j]+right;
                }
            }
        }
//        cout<<"left : "<<left<<endl;
//        cout<<"Mid : "<<mid<<endl;
//        cout<<"Right : "<<right<<endl;
        left=left+mid+right;
        int rslt=left.length();
        if(!rslt)cout<<"0"<<endl;
        else cout<<rslt<<endl<<left<<endl;
    }
    return 0;
}
