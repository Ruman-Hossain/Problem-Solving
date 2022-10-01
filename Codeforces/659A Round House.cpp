#include <iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    if(b > 0){
        int rslt = (a + b) % n;
        if (rslt == 0) rslt = n;
        cout << rslt << endl;
    }
    else{
        b = abs(b) % n;
        if (b == 0) b = n;

        if (a > b){
            cout << (a - b) << endl;
        }
        else{
            cout << n - (b - a)<< endl;
        }
    }
    return 0;
}
