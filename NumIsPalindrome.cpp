#include <iostream>
using namespace std;
int main()
{
    int num,temp;
    int sum=0;
    cin>>num;
    temp=num;
    while (temp>0)
    {
        int rem = temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    if(num==sum){
        cout<<num<<" It is palin";
    }
    else{
        cout<<num<<" Not a palin";
    }
    return 0;
}