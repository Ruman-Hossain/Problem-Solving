#include<iostream>
using namespace std;
int main()
{
    int a[100],i,al=0,gs=0,ds=0;
    for(i=0; ;i++){
        while(a[i]>4){
            cin>>a[i];
            if(a[i]==1)
                al+=1;
            if(a[i]==2)
                gs+=1;
            if(a[i]==3)
                ds+=1;
        }
        if(a[i]==4)
            break;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<gs<<endl;
    cout<<"Diesel: "<<ds<<endl;
    return 0;
}
