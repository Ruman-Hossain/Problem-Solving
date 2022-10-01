#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[100],count=0,sum=0,avg;
    int i;
    for(i=0; ;i++){
        while(cin>>a[i]){
            if(a[i]>=0&&a[i]<=10){
                count+=1;
                sum+=a[i];

                if(count==2){
                break;
            }
            }
            else
                cout<<"nota invalida"<<endl;

        }
        avg=sum/2;
        cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
        break;
    }
    return 0;
}
