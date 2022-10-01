long Solution::solve(int A, int B) {
    long x=A, y = B;
    while(y>1){
        if(x%2==0){
            x/=2;
        }
        else{
            x=3*x+1;
        }
        y--;
    }
    return x;
}
