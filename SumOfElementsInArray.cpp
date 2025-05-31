#include <iostream>
using namespace std;
int main()
{
    int arr[100],n,sum=0;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"enter "<<n<<" Elements";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of array elements "<<sum;
    
    return 0;
}