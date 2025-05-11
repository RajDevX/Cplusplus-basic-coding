#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int count=0;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
     if (isupper(str[i]))
        count++;   
    }
    cout <<count<< " Uppercase Letter";
    return 0;
}