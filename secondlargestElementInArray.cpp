#include <iostream>
#include <Climits>
using namespace std;
int findseclarnum(int arr[],int  n){

    int lar= INT_MIN;
    int seclar= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>lar){
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]>seclar&& arr[i]<lar){

            seclar=arr[i];
        }
    }
    if (seclar==INT_MIN)
    {
        return -1;
    }
    
    return seclar;
    
}
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    if(n<2){
        cout<<"Array must be have 2 elements ";
        return 0;
    }
    int arr[n];
    cout<<"enter "<<n <<" Elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result =findseclarnum(arr,n);
    if(result!=-1)
     cout<<"the secound largest num "<<result;
     else
     cout<<"No Vaild second lar number found "<<endl;
    return 0;
}