#include<bits/stdc++.h>
using namespace std;

int PossiblePalindromeCheck(string str)
{
    int low=0,high=str.length()-1,cnt=0;
    while(low<high){
        if(str[low]==str[high]){
            low++;
            high--;
        }
        else{
            cnt++;
        low++;
        high--;
        }
    }
    return cnt;
}
int main()
{
   string str;
   cin>>str;
        int tmp=0;
        for(int i=0;i<str.size();i++){
            if(! islower(str[i]))
            {
                cout<<"NO"<<endl;
                tmp=-1;
            }
        }
        if(tmp!= -1){
    int  rslt=PossiblePalindromeCheck(str);
    //cout<<rslt<<endl;
    if(rslt==1||rslt==0&&str.length()%2!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        }
   

    return 0;
}
