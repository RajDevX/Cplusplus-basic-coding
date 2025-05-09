#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int num,temp;
   int sum=0,count=0;
   cin>>num;
   temp = num;
   int n= num;
   while (n>0)
   {
    count++;
    n/=10;
   }
   temp=num;
   while (temp>0)
   {
    int digit= temp%10;
    sum +=(int)(pow(digit,count)+0.5);
    temp/=10;
   }
   if(sum==num)
   cout<<num<<" It is armstrongNo ";
   else
   cout<<num<<" Not a armstrongNO ";
   
    return 0;
}