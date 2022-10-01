#include<bits/stdc++.h>
using namespace std;
int main()
{
    double S=1;
    int j=2;
    for(int i=3;i<40;i++){
            S+=(float)i/(float)j;
            i++;
            j*=2;
    }
    printf("%0.2lf\n",S);
    return 0;
}
