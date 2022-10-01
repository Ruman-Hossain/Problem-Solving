#include<iostream>
#define MAX(a,b)(a)>(b)?(a):(b)
#define MIN(a,b)(a)<(b)?(a):(b)
#include<cmath>
using namespace std;
double maximum(double a,double b, double c)
{
    double max1,max2;
    max1=MAX(a,b);
    max2=MAX(max1,c);
    return max2;
}
double midle(double a, double b, double c)
{
    if(a>=b&&b>=c||a<=b&&b<=c)
        return b;
    else if(b>=c&&c>=a||b<=c&&c<=a)
        return c;
    else if(b>=a&&a>=c||b<=a&&a<=c)
        return a;
}
double minimum(double a,double b, double c)
{
    double min1,min2;
    min1=MIN(a,b);
    min2=MIN(min1,c);
    return min2;
}
int main()
{
    double A,B,C,X,Y,Z;
    cin>>X>>Y>>Z;
            if(X>0&&Y>0&&Z>0){
    A=maximum(X,Y,Z);
    B=midle(X,Y,Z);
    C=minimum(X,Y,Z);

    if(A>=B+C)
        cout<<"NAO FORMA TRIANGULO"<<endl;

    else{
    if(A*A==B*B+C*C)
        cout<<"TRIANGULO RETANGULO"<<endl;


    if(A*A>(B*B+C*C))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;

    if(A*A<(B*B+C*C))
        cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(A==B&&B==C)
        cout<<"TRIANGULO EQUILATERO"<<endl;

    if(A==B&&B!=C||A==C&&C!=B||B==C&&C!=A)
        cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }
    return 0;
}
