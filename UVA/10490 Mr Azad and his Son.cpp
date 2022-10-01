#include<bits/stdc++.h>
int isPrime(int n)
{
    int i;
    if(n <= 1) return 0;
    else if(n == 2) return 1;
    else{
        for(i = 2; i*i <= n; i++)
            if(n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n , x;
    long long p;
    while(scanf("%d",&n)!=EOF){
        if(n == 0) break;
        else if(n == 1) printf("Perfect: 1!\n");
        else if(n == 31) printf("Perfect: 2305843008139952128!\n");
        else if(n==2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 ||n == 17 || n == 19 || n == 23 || n == 29){
            x = pow(2,n) - 1;
            if(isPrime(x)){
                p = pow(2,(n-1)) * x;
                printf("Perfect: %lld!\n", p);
            }
            else printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}


