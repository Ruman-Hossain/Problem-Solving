#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,find;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>find;
        auto result = lower_bound(arr.begin(),arr.end(),find);
        cout<<(*result == find? "Yes ":"No ")<<result-arr.begin()+1<<endl;
    }
    return 0;
}