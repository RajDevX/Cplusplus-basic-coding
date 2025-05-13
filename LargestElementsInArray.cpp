#include <iostream>
#include <vector>
using namespace std;
int findlargestnum(const vector<int>&arr){
    int largest =arr[0];
    for (int  i = 1; i < arr.size(); i++)
    {
        if (arr[i]>largest){
         largest=arr[i];
         
        }
    }
    return largest;
    
}

int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n <<" elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest = findlargestnum(arr);
    cout<<"the largest num : "<<largest;
    

    return 0;
}