#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

char str[81];
int  score[81];

int main()
{
    int n;
    scanf("%d",&n);
    while (n --) {
        scanf("%s",str);
         score[0] = (str[0] == 'O');
        for (int i = 1 ; str[i] ; ++ i) {
            score[i] = score[i-1]+1;
            if (str[i] != 'O')
                score[i] = 0;
        }
        int sum = 0;
        for (int i = 0 ; str[i] ; ++ i)
            sum += score[i];

        printf("%d\n",sum);
    }
    return 0;
}
