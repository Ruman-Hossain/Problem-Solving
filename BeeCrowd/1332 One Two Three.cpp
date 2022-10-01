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
    int t;
    char s[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int two=0,three=0,one=0;
        if(s[0]=='o'&&s[1]=='n'&&s[2]=='e'||s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e')
            one++;
        if(s[0]=='t'&&s[1]=='w'&&s[2]=='o'||s[0]=='t'&&s[1]=='w'||s[0]=='t'&&s[2]=='o'||s[1]=='w'&&s[2]=='o')
            two++;

        if(one>two)cout<<"1"<<endl;
        else if(two>one)cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }

    return 0;
}
