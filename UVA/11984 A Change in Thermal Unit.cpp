#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double c,d;
    cin>>t;
    int kase=1;
    while(t--){
        cin>>c>>d;

        double fah=(9/5.0)*c+32.0;
        double total_fah=fah+d;
        double cel_rslt=((total_fah-32.0)/9.0)*5.0;


        cout<<"Case "<<kase++<<": "<<setprecision(2)<<fixed<<cel_rslt<<endl;
    }
    return 0;
}
