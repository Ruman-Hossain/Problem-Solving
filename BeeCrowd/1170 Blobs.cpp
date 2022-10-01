#include<iostream>
using namespace std;
int main()
{
    float x;
    int i,n,dias;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        dias=0;
        while(x>1){
            x=x/2;
            dias++;

        }
        cout<<dias<<" dias"<<endl;
    }
    return 0;
}
