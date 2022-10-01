#include<iostream>
#include<stdio.h>
using namespace std;
#define M 2000000

char year[M];
int mod(char[], int);

int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int leap, hulu, bulu, festival = 1;
    while (gets(year))
    {
        leap = hulu = bulu = 0;
        if (!mod(year, 4) && (mod(year, 100) || !mod(year, 400)))
        {
            leap = 1;
            if (!mod(year, 55))
                bulu = 1;
        }

        if (!mod(year, 15))
            hulu = 1;

        if (festival)
            festival = 0;
        else
            printf("\n");

        if (leap && hulu && bulu)
            printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.\n");
        else if (leap && hulu)
            printf("This is leap year.\nThis is huluculu festival year.\n");
        else if (leap && bulu)
            printf("This is leap year.\nThis is bulukulu festival year.\n");
        else if (hulu && bulu)
            printf("This is huluculu festival year.\nThis is bulukulu festival year.\n");
        else if (leap)
            printf("This is leap year.\n");
        else if (hulu)
            printf("This is huluculu festival year.\n");
        else if (bulu)
            printf("This is bulukulu festival year.\n");
        else
            printf("This is an ordinary year.\n");
    }
    return 0;
}

int mod(char year[], int n)
{
    int m, i, y = 0;
    for (i = 0; year[i]; i++)
        y = (y * 10 + year[i] - 48) % n;
    return y;
}
