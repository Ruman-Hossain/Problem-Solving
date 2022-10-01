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
    int n;
    while ((cin>>n)&&n!=0) {
		vector<int> arr;

		for(int i=0;i<n;i++){
			int m;
			cin>>m;
			if(m>0) arr.push_back(m);
		}

		int size = arr.size();
		if(size==0) printf("0\n");
		else{
			for(int i=0;i<size;i++){
				cout<<arr[i];// same as printf("%d",arr.at(i));
				if(i!=size-1) cout<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}
