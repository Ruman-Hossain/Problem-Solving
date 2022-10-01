#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
using namespace std;
int main()
{   unsigned long int rslt=0,n;
        cin>>n;
        rslt += n/5;
        n%=5;
        rslt+=n/4;
        n%=4;
        rslt +=n/3;
        n%=3;
        rslt+=n/2;
        n%=2;
        rslt+=n;
        cout<<rslt<<endl;


    return 0;
}
