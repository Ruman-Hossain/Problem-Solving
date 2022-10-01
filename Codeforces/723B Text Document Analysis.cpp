#include<bits/stdc++.h>
using namespace std;
vector<long long>brk,prk;
int main()
{
    string s;
    int ln,i,sz,brkt;
    
    while(cin>>ln){
        cin>>s;

        sz=0;
        brkt=0;
        int rslt=0;
        int mxm=-1;
        for(i=0;i<ln;i++){
            if(s[i]=='_'){
                if(brkt==1)
                    prk.push_back(sz);
                else
                    brk.push_back(sz);
                sz=0;
            }
            else if(s[i]=='('){
                        brk.push_back(sz);
                        sz=0;
                        brkt=1;
                        }
            else if(s[i]==')'){
                prk.push_back(sz);
                sz=0;
                brkt=0;
            }
            else
                sz++;
        }
        brk.push_back(sz);
        int brsz1 = brk.size();
        int brsz2 = prk.size();
        sort(brk.begin(),brk.begin()+brsz1);

        for(i=0;i<brsz2;i++){
            if(prk[i]>0)
                rslt++;
        }
            cout<<brk[brsz1-1]<<" ";
            
            cout<<rslt<<endl;
    }

    return 0;
}