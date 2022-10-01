#include<bits/stdc++.h>
using namespace std;
#define CLR(arr)  memset(data, '\0', sizeof(data));
int main()
{
    int test;
    char str[2005], data[10];

    cin >> test;
    getchar();
    CLR(data);

    for(int i = 1; i <= test; i++) {
        CLR(str);

        gets(str);
        int len = strlen(str), index = 0;

        cout << "Message #" << i << endl;

        for(int j = 0; j < len; j++) {
            if(str[j] != ' ' )
                data[index++] = str[j];
            if(str[j] == ' ' || j == len - 1) {
                if(strcmp(data,".-" ) == 0)
                    cout << "A";
                else if(strcmp(data,"-..." ) == 0)
                    cout << "B";
                else if(strcmp(data,"-.-." ) == 0)
                    cout << "C";
                else if(strcmp(data,"-.." ) == 0)
                    cout << "D";
                else if(strcmp(data,"." ) == 0)
                    cout << "E";
                else if(strcmp(data,"..-." ) == 0)
                    cout << "F";
                else if(strcmp(data,"--." ) == 0)
                    cout << "G";
                else if(strcmp(data,"...." ) == 0)
                    cout << "H";
                else if(strcmp(data,".." ) == 0)
                    cout << "I";
                else if(strcmp(data,".---" ) == 0)
                    cout << "J";
                else if(strcmp(data,"-.-" ) == 0)
                    cout << "K";
                else if(strcmp(data,".-.." ) == 0)
                    cout << "L";
                else if(strcmp(data,"--" ) == 0)
                    cout << "M";
                else if(strcmp(data,"-." ) == 0)
                    cout << "N";
                else if(strcmp(data,"---" ) == 0)
                    cout << "O";
                else if(strcmp(data,".--." ) == 0)
                    cout << "P";
                else if(strcmp(data,"--.-" ) == 0)
                    cout << "Q";
                else if(strcmp(data,".-." ) == 0)
                    cout << "R";
                else if(strcmp(data,"..." ) == 0)
                    cout << "S";
                else if(strcmp(data,"-" ) == 0)
                    cout << "T";
                else if(strcmp(data,"..-" ) == 0)
                    cout << "U";
                else if(strcmp(data,"...-" ) == 0)
                    cout << "V";
                else if(strcmp(data,".--" ) == 0)
                    cout << "W";
                else if(strcmp(data,"-..-" ) == 0)
                    cout << "X";
                else if(strcmp(data,"-.--" ) == 0)
                    cout << "Y";
                else if(strcmp(data,"--.." ) == 0)
                    cout << "Z";
                else if(strcmp(data,"-----" ) == 0)
                    cout << "0";
                else if(strcmp(data,".----" ) == 0)
                    cout << "1";
                else if(strcmp(data,"..---" ) == 0)
                    cout << "2";
                else if(strcmp(data,"...--" ) == 0)
                    cout << "3";
                else if(strcmp(data,"....-" ) == 0)
                    cout << "4";
                else if(strcmp(data,"....." ) == 0)
                    cout << "5";
                else if(strcmp(data,"-...." ) == 0)
                    cout << "6";
                else if(strcmp(data,"--..." ) == 0)
                    cout << "7";
                else if(strcmp(data,"---.." ) == 0)
                    cout << "8";
                else if(strcmp(data,"----." ) == 0)
                    cout << "9";
                else if(strcmp(data,".-.-.-" ) == 0)
                    cout << ".";
                else if(strcmp(data,"--..--" ) == 0)
                    cout << ",";
                else if(strcmp(data,"..--.." ) == 0)
                    cout << "?";
                else if(strcmp(data,".----." ) == 0)
                    cout << "'";
                else if(strcmp(data,"-.-.--" ) == 0)
                    cout << "!";
                else if(strcmp(data,"-..-." ) == 0)
                    cout << "/";
                else if(strcmp(data,"-.--." ) == 0)
                    cout << "(";
                else if(strcmp(data,"-.--.-" ) == 0)
                    cout << ")";
                else if(strcmp(data,".-..." ) == 0)
                    cout << "&";
                else if(strcmp(data,"---..." ) == 0)
                    cout << ":";
                else if(strcmp(data,"-.-.-." ) == 0)
                    cout << ";";
                else if(strcmp(data,"-...-" ) == 0)
                    cout << "=";
                else if(strcmp(data,".-.-." ) == 0)
                    cout << "+";
                else if(strcmp(data,"-....-" ) == 0)
                    cout << "-";
                else if(strcmp(data,"..--.-" ) == 0)
                    cout << "_";
                else if(strcmp(data,".-..-." ) == 0)
                    cout << char(34);
                else if(strcmp(data,".--.-." ) == 0)
                    cout << "@";
                if(str[j+1] == ' ' ) {
                    cout << " ";
                    j++;
                }
                CLR(data);
                index = 0;
            }
        }
        cout << endl;
        if(i != test) cout << endl;
    }
    return 0;
}
