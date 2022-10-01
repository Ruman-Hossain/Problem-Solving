#include<iostream>
using namespace std;
int main()
{
    int x=2002,y,r;
    while(y!=x){
        cin>>y;

        if(y!=x)
            cout<<"Senha Invalida"<<endl;
        else
            cout<<"Acesso Permitido"<<endl;
    }
    return 0;
}
