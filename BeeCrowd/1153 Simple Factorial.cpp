#include<iostream>
using namespace std;
int fact(int n)
{
    int i;
    if(n==0||n==1)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int n,factorial;
    cin>>n;
   factorial=fact(n);
    cout<<factorial<<endl;

    return 0;
}
