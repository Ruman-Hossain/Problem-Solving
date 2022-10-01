#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin>>n)
    while (n --) {
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;

        x1 = x1>x3?x1:x3;
        y1 = y1>y3?y1:y3;

        x2 = x2<x4?x2:x4;
        y2 = y2<y4?y2:y4;

        if (x1 < x2 && y1 < y2)
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
        else
            cout<<"No Overlap"<<endl;
        if(n)
        cout<<endl;
    }

    return 0;
}
