#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int decimal){
    if (decimal == 0)
        return 0;
    return (decimal % 2 + 10 *decimalToBinary(decimal / 2));
}

int main(){
    int decimal;
    while(cin>>decimal){
        cout << decimalToBinary(decimal)<<endl;
    }
    return 0;
}