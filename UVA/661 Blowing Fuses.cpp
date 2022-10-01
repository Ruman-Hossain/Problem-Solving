#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,m,c,kase,crrntCst,eachCost[21],crrntChck,maxCost,onesOn;
    kase=1;
    while((cin>>n>>m>>c),n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>eachCost[i];
        }
        crrntCst = maxCost = onesOn=0;
        while(m--)
        {
            cin>>crrntChck;
            if(maxCost <= c)
            {
                if(onesOn &(1<<crrntChck))
                    crrntCst -=eachCost[crrntChck - 1];
                else
                {
                    crrntCst +=eachCost[crrntChck - 1];
                    if(crrntCst > maxCost)
                        maxCost = crrntCst;
                }
                onesOn ^=(1<<crrntChck);
            }
        }
        cout<<"Sequence "<<kase++<<endl;
        if(maxCost > c)
            cout<<"Fuse was blown."<<endl<<endl;
        else
            cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<maxCost<<" amperes."<<endl<<endl;

    }
    return 0;
}
