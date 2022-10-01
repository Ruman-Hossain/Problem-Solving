int Solution::solve(vector<int> &A) {
    int mx=0,cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>mx){
            mx = A[i];
            cnt++;
        }
    }
    return cnt;
}
