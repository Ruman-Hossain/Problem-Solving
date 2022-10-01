#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;

bool com(pii x, pii y){
    if(x.second != y.second)
        return x.second < y.second;
    return x.first > y.first;
}
int main()
{
    char str[1015];
    int frq[128];
    bool blank=false;
    vector<pair<int,int> >lis;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(str)){
       int ln=strlen(str);
       memset(frq,0,sizeof(frq));
       for(int i=0;i<ln;i++)
         frq[(int)str[i]]++;

       for(int i=0;i<128;i++)
          if(frq[i]>0)
             lis.push_back(pii(i,frq[i]));

      sort(lis.begin(),lis.end(),com);

     if(blank)puts("");
     blank = true;
      for(int i=0;i<(int)lis.size();i++)
        cout<<lis[i].first<<" "<<lis[i].second<<endl;

      lis.clear();

    }
    return 0;
}
