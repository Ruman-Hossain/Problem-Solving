vector<int> Solution::solve(vector<int> &v) {
    int n=v.size();
    int i=0,j=0;
    while(j<n){
        if(v[j]!=0){
            swap(v[i],v[j]);
            i++;
        }
        j++;
    }
    return v;
    
}
