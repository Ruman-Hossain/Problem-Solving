#include<bits/stdc++.h>
using namespace std;
int main()
{
    double salary,tax;
    while(cin>>salary){
        if(salary>=0.0&&salary<=2000.00){
            cout<<"Isento"<<endl;

        }
        else{

           if(salary>2000.00&&salary<=3000.00){
                tax=(salary - 2000.00)*0.08;
            }
            else if(salary>=3000.00&&salary<=4500.00){
                tax=((salary - 3000.00)*0.18 + 1000.00*0.08);
            }
            else{
                tax=((salary - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
            }
            printf("R$ %.2lf\n",tax);
        }
    }
    return 0;
}
