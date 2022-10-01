#include<iostream>
using namespace std;
int main()
{
    int a[5],i,even=0,odd=0,pstv=0,ngtv=0;
    for(i=0;i<5;i++){
        cin>>a[i];
        if(a[i]>0)
            pstv+=1;
        if(a[i]<0)
            ngtv+=1;
        if(a[i]%2==0)
            even+=1;
        if(a[i]%2!=0)
            odd+=1;
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pstv<<" valor(es) positivo(s)"<<endl;
    cout<<ngtv<<" valor(es) negativo(s)"<<endl;
    return 0;
}
