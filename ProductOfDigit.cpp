#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum = 1;
    while (num>0)
    {
        int rem =num%10;
        sum = sum*rem;
        num /=10;
    }
    cout<<sum;
    return 0;
}