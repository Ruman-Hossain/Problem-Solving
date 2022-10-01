#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,a,b,i;

    while(cin>>a>>b){
            int arr[10];
            memset(arr,0,sizeof(arr));
         t=a/b;
        m=a%b;
        n=b;
        i=0;

        //cout<<m<<" "<<n<<endl;

        int r;
        do{
            arr[i++]= n/m;
            r=n%m;
            int tmp=m;
            m=n%m;
            n=tmp;


        }while(r!=0);
        int d=i;

        //for(i=0;i<d;i++)cout<<arr[i]<<" ";

        cout<<"["<<t<<";";
        for(i=0;i<d;i++){
            cout<<arr[i];
            if(i<d-1)cout<<",";
        }
        cout<<"]"<<endl;
    }
    return 0;
}
