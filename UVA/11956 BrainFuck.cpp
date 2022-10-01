#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    char input[100001];
    int data[100];
    int T, current;

    cin>>T;

    for (int t = 1; t <= T; ++t)
    {
        for (int i = 0; i < 100; ++i)
            data[i] = 0;

        current = 0;

        cin>>input;


        for (int i = 0; input[i]; ++i)
        {
            switch (input[i])
            {
            case '>':
                ++current;
                if (current == 100)
                    current = 0;
                break;

            case '<':
                --current;
                if (current == -1)
                    current = 99;
                break;

            case '+':
                ++data[current];
                if (data[current] == 256)
                    data[current] = 0;
                break;

            case '-':
                --data[current];
                if (data[current] == -1)
                    data[current] = 255;
            }
        }
        printf("Case %d:", t);
        for (int i = 0; i < 100; ++i)
            printf(" %02X", data[i]);
        cout<<endl;
    }

}
