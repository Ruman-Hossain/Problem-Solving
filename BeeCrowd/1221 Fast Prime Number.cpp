#include<iostream>
#include<cmath>
using namespace std;
int is_prime(int n)
{
    int i, root;
     if(n == 2) {
    return 1;
    }
        if(n % 2 == 0) {
    return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2) {
        if(n % i == 0) {
        return 0;
        }
    }
    return 1;
}
int main()
{
    int n, m,i,j,t;
    cin>>t;
    for(i=0;i<t;i++){
    cin>>n;
        if(n == 0) {
        break;
    }
        if(1 == is_prime(n)) {
   cout<<"Prime"<<endl;
    }
    else {
        cout<<"Not Prime"<<endl;
        }
    }
    return 0;
}
