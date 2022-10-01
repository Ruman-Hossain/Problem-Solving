#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int temp, i,j, n,m,a[100];
    int count;
    cin>>n;
    while(n--){
            count=0;
        cin>>m;
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);

        for(i=1;i<m;i++)
            for(j=m-1;j>=i;j--)
            if(a[j]<a[j-1]){
                    count+=1;
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
      }
    return 0;
}
