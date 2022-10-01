//RUMAN CSE (6th Intake) BRUR
#include<iostream>
#include<cstdio>
#include<cmath>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include<cstring>
#include<strstream>
#include<cstdlib>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<vector>
#include<iomanip>
#include<algorithm>
#define MAX(a,b)a>b?a:b
#define MIN(a,b)a<b?a:b
#define PI 3.1416

using namespace std;
int main()
{
   //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   int t,n,m;
    string st[110],str;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
       for(int i=0;i<n;i++)
        {
            cin>>str;
            if(str=="LEFT")
            {
                st[i]=str;
                cnt--;
            }
            else if(str=="RIGHT")
            {
                st[i]=str;
                cnt++;
            }
            else
            {
                cin>>str;
                cin>>m;
                if(st[m-1]=="LEFT")
                {
                    st[i]=st[m-1];
                    cnt--;
                }
                else
                {
                    st[i]=st[m-1];
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}
