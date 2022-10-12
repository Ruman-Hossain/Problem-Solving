#include<bits/stdc++.h>
using namespace std;
int main() {
    int tarr,tq;
    cin>>tarr>>tq;  //total Array, Total Query
    vector<vector<int>>v;
    int i=0;
    while(tarr--){
        int n,input;
        cin>>n;
        v.emplace_back();   //Initialize Empty Sub Vector  Similar to v.push_back() or v.resize(n)
        for(int j=0;j<n;j++){
            cin>>input;
            v.back().push_back(input);  //Insert data to Sub Vector
            //v[i].push_back(input);    // Same to v.back().push_back(input);
            //v[i][j] = input;    /*WRONG PROCESS cause vector index is not created yet*/ 
        }
        i++;
    }
    //Query for mth row and nth index
     int m,n;
     while(tq--){
         cin>> m >> n;
         cout<< v.at(m).at(n)<<endl;
     }
    return 0;
}