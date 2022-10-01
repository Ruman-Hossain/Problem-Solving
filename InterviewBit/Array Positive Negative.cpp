vector<int> Solution::solve(vector<int> &arr) {
    vector<int>status(2,0);
    for(int i:arr){
        if(i>0)status[0]+=1;
        else if(i<0)status[1]+=1;
    }
    return status;
}
