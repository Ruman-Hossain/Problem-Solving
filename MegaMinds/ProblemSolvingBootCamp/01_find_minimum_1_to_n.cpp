#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>data;
    int t,n;
    cin>>t;
    while(t--){
        cout<<" List Size : ";
        cin>>n;
        data.clear();
        int input;
        while(n--){
            cin>>input;
            data.push_back(input);
        }
        sort(data.begin(),data.end());
        cout<<*data.begin()<<endl;
    }
    return 0;
}
