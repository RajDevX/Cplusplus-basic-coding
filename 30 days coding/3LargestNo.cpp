#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout<<"Enter 3 num: ";
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "1th no is greater " << n1;
    }
    else if (n2 > n3 && n2 > n1)
    {
        cout << "2nd no is grester " << n2;
    }
    else
    {
        cout << "3nd no is greater " << n3;
    }

    return 0;
}