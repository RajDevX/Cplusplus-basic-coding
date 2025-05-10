#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter ";
    cin>>ch;
    if(isalpha(ch))
     cout<<"It is alphabet "<<ch;
    else
     cout<<"Not a alphabet ";
    return 0;
}