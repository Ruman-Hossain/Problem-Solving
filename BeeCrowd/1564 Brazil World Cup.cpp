#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;
int main()
{
    unsigned int n;
    while(scanf("%u",&n)!=EOF){
    if(n>0)
        cout<<"vai ter duas!"<<endl;
    else
        cout<<"vai ter copa!"<<endl;
    }
    return 0;
}
