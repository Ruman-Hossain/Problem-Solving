#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    string s,line;
    cin>>t;
    set<string>st;
    map<string,int>m;
    while(t--){
        cin>>s;
        getline(cin,line);
        m[s]++;
        st.insert(s);
    }
    set<string>::iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<*it<<" "<<m[*it]<<endl;
    }
    return 0;
}

/*
int main()
{
    int t;
    map<string,set<string> >m;
    string str;
    cin>>t;
    getline(cin,str);
    while(t--){
        getline(cin,str);
        int pos=str.find(' ');
        m[str.substr(0,pos)].insert(str.substr(pos+1,str.size()-pos));

    }
    map<string,set<string> >::const_iterator itr;
    for(itr=m.begin();itr!=m.end(); ++itr){
        cout<<(*itr).first<<" "<<(*itr).second.size()<<endl;
    }

    return 0;
}
*/
