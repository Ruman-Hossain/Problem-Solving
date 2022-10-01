#include<iostream>
#include<cmath>

using namespace std;
int main()
{	unsigned long count,n1,n2,j,i,maxcl;
   while(cin>>n1>>n2)
   {
   	cout<<n1<<" "<<n2;
   	maxcl=1;
   	if(n1>n2)
   	{	i=n1;
   		n1=n2;
      	n2=i;
   	}
   	for(j=n1;j<=n2;j++)
   		{  count=1;
         	i=j;
      		while(i!=1)
      		{	if(i%2==1)
   					i=3*i+1;
   				else
						i=i/2;
               count++;
      		}
         if(count>maxcl)
         			maxcl=count;
         }
         cout<<" "<<maxcl<<endl;
	}
}
