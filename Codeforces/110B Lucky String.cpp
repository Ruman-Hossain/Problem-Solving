#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int main()
{

    fast;
    int n, i, j;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            if(i%4==0)
                cout << "a";
            else if(i%4==1)
                cout << "b";
            else if(i%4==2)
                cout << "c";
            else if(i%4==3)
                cout << "d";

        }
        cout <<endl;
    }
    return 0;
}
