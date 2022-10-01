#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<sstream>
#include<map>
using namespace std;
string arabicToRoman(int arabic)
{
    int romanValues[13]= {
                                  1000, 900, 500, 400, 100,
                                    90,  50,  40,  10,  9,
                                     5,   4,   1 };
    string romanString[13]={
                                    "M", "CM", "D", "CD", "C",
                                    "XC", "L", "XL", "X", "IX",
                                    "V", "IV", "I" };
   string rslt;
   for(int i = 0; i < 13; ++i) {
      if (arabic == 0)
         break;

      int times = arabic / romanValues[i];
      arabic -= times * romanValues[i];

      for(int j = 0; j < times; ++j)
         rslt += romanString[i];
   }

   return rslt;
}


int romanToArabic( string roman)
{
    map<int,int>romanValues;
    romanValues['M'] = 1000;
    romanValues['D'] = 500;
    romanValues['C'] = 100;
    romanValues['L'] = 50;
    romanValues['X'] = 10;
    romanValues['V'] = 5;
    romanValues['I'] = 1;

    int rslt=0;
    for(int i = 0; i < roman.size(); ++i) {
      int value = romanValues[roman[i]];
      if (i < roman.size() - 1 && value < romanValues[roman[i + 1]])
         rslt -= value;
      else
         rslt += value;
   }

   return rslt;
}
bool isArabic( string number)
{
    return number[0] >= '0' && number[0] <= '9';
}

int stringToInt( string& number)
{
       istringstream input(number);
       int rslt;
       input >> rslt;

       return rslt;
}

int main() {
     string number;
       while(cin >> number) {
          if (isArabic(number))
             cout << arabicToRoman(stringToInt(number)) << endl;
          else
             cout << romanToArabic(number) << endl;
       }
       return 0;
}
