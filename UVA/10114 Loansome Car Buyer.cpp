#include<bits/stdc++.h>
using namespace std;
int main()
{
    int LoanDuration,nRec;
    double downPayment,Loan,decP[101];
    while(true){
        cin>>LoanDuration>>downPayment>>Loan>>nRec;
        if(LoanDuration<0)break;
        int month;
        double prcnt;
        while(nRec--){
            cin>>month>>prcnt;
            for(int j=month;j<101;j++)
                decP[j] = prcnt;

        }
        int now =0;
        double mnthlyPymnt = Loan / LoanDuration;
        double carValue = (Loan + downPayment) * (1 - decP[0]);
        double carLoan = Loan;
        while(carValue <carLoan){
            now++;
            carLoan -= mnthlyPymnt;
            carValue = carValue * (1 - decP[now]);
        }
        cout<<now<<" month";
        if(now!=1)
            cout<<"s";
        cout<<endl;
    }

    return 0;
}
