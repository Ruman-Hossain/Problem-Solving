#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{
    float salary,novo,ganho,em;

    cin>>salary;

    if(salary>=0&&salary<=400){
            novo=(salary+((salary*15)/100));
            ganho=novo-salary;
            em=15;
    }
    else if(salary>400&&salary<=800){
            novo=(salary+((salary*12)/100));
            ganho=novo-salary;
            em=12;
    }
    else if(salary>800&&salary<=1200){
            novo=(salary+((salary*10)/100));
            ganho=novo-salary;
            em=10;
    }
    else if(salary>1200&&salary<=2000){
            novo=(salary+((salary*7)/100));
            ganho=novo-salary;
            em=7;
    }
    else if(salary>2000){
            novo=(salary+((salary*4)/100));
            ganho=novo-salary;
            em=4;
    }
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<ganho<<endl;
    cout<<"Em percentual: "<<fixed<<setprecision(0)<<em<<" %"<<endl;

    return 0;
}
