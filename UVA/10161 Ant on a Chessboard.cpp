#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long n,i,x,y,k,root;
  while(cin>>k){
    if(k==0)break;
    for(i=k;i>=1;i--){
        root=sqrt(k);
        if(root*root==i)break;
    }
    if(i==k&&root%2==0)cout<<root<<" 1"<<endl;
    else if(i==k&&root%2==1)cout<<"1 "<<root<<endl;
    n=i;

    if(root%2==0){
        x=root;
        y=1;
        x++;
        n++;
        if(n==k)cout<<x<<" 1"<<endl;
        else{
            while(x!=y){
                y++;
                n++;
                if(n==k){
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
            }
            while(x!=1){
                x--;
                n++;
                if(n==k)cout<<x<<" "<<y<<endl;
            }
        }
    }

    if(root%2==1){
        y=root;
        x=1;
        y++;
        n++;
        if(n==k)cout<<"1 "<<y<<endl;
        else{
            while(x!=y){
                x++;
                n++;
                if(n==k){
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
            }
            while(y!=1){
                y--;
                n++;
                if(n==k)cout<<x<<" "<<y<<endl;
            }
        }
    }

  }
    return 0;
}
