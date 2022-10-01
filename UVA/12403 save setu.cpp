#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int T, sum=0,tk,i;

    cin>>T;
    for(i=0;i<T;i++){
        cin>>s;
        if(s=="donate"){
            cin>>tk;
            sum=sum+tk;
        }
        else{

            cout<<sum<<endl;
        }
    }
    return 0;
}
