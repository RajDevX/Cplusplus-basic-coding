#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    if (n < 0)
        cout << "Negative num " << n;
    else
        cout << "Postive num " << n;
    return 0;
}
