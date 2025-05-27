#include <iostream>
using namespace std;
int factorial(int n){
   int fact=1;
   for (int i = 0; i <=n; i++)
   {
     fact*=i;
     return fact;
   }
   
}
int main()
{
    int num,temp;
    int sum=0;
    cin>>num;
    temp=num;
    while (temp>0)
    {
        int rem = temp%10;
        sum=sum+factorial(rem);
        temp /=10;
    }
    if(sum=num){
        cout<<num<<" It is Strong num";
    }
    else{
        cout<<num<<" It Not is Strong num";
    }
    return 0;
}