#include <iostream>
using namespace std;
int main()
{
    string str,rev,org;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i]=tolower(str[i]);
    }
    
    for (int i = str.length()-1; i >=0; i--)
    {
        rev += str[i];
    }
    if (str==rev)
    {
        cout<<str<<" It is palin";
    }
    else{

        cout <<str<< " Not a palin";
    }
    return 0;
}