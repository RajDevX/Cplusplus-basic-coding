#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a num to rev:";
    cin>>num;
    int rev =0,rem;
    while (num>0)
    {
        /* code */
        rem = num%10;
        rev=rev*10+rem;
        num/=10;



    }
    
    cout<<rev;
    return 0;
}