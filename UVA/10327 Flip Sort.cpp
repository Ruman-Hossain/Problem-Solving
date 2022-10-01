//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<map>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int temp, i,j,m,a[1050];
    int count;

        while(cin>>m){
                count=0;
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
        cout<<"Minimum exchange operations : "<<count<<endl;
      }
    return 0;
}
