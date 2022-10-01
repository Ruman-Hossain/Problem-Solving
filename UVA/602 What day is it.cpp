#include<bits/stdc++.h>
using namespace std;
int dayInMnth[]={
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};
string mnth[]={
    "", "January", "February", "March", "April",
    "May", "June","July", "August", "September",
     "October", "November", "December"
};
string week[]={
    "Sunday", "Monday", "Tuesday", "Wednesday",
     "Thursday", "Friday", "Saturday"
};
bool isleap(int y)
{
    if ((y <= 1752) && ((y % 4) == 0))
		return true;
	else if (y<= 1752)
		return false;
	else if ((y % 400) == 0)
		return true;
	else if ((y % 100) == 0)
		return false;
	else if ((y % 4) == 0)
		return true;
	else
		return false;
}
int day(int d,int m,int y)
{
    if ((d>=3)&&(d<=13)&&(m==9)&&(y==1752))
        return -1;
    else if(m>12)
        return -1;
    else if(m==2)
        return 28+isleap(y);
    else
        return dayInMnth[m];
}
int solve(int d,int m,int y)
{

    int rslt=6;
    for(int i=1;i<y;i++){
        rslt=(rslt+1+isleap(i))%7;
        if(i==1752)
            rslt+=3;
    }
    for(int i=1;i<m;i++){
        rslt=(rslt+day(1,i,y))%7;
        if((i==9)&&y==1752)
            rslt+=3;
    }
    for(int i=1;i<d;i++){
        rslt++;
        if((m==9)&&(y==1752)&&i==2)
            i+=1;
    }
    return rslt%7;
}
int main()
{

    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int m,d,y;
    while((cin>>m>>d>>y)){
            if(m==0||d==0||y==0)break;
        if(d>day(d,m,y)){
            cout<<m<<"/"<<d<<"/"<<y<<
            " is an invalid date."<<endl;
        }
        else{
            cout<<mnth[m]<<" "<<d<<", "<<y<<
            " is a "<<week[solve(d,m,y)]<<endl;
        }
    }

    return 0;
}
