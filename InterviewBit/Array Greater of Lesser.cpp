int Solution::solve(vector<int> &arr1, vector<int> &arr2, int x) {
    int cntr1=0,cntr2=0;
    for(int i:arr1){
        if(i>x)cntr1++;
    }
    for(int j:arr2){
        if(j<x)cntr2++;
    }
    return max(cntr1,cntr2);
}
