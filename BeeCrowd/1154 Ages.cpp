#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,a[100],sum=0,count=0;
    float avg;
    for(i=0; ;i++){
            while(cin>>a[i]){

        if(a[i]>=0){
            sum+=a[i];
            count+=1;
        }
        else{
                break;
            }

        }

    avg=(float)sum/count;
    cout<<fixed<<setprecision(2)<<avg<<endl;
    break;
    }
    return 0;

}
