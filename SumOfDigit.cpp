#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum = 0;
    while (num>0)
    {
        /* code */
        int rem =num%10;
        sum = sum+rem;
        num /=10;
    }
    cout<<sum;
    return 0;
}