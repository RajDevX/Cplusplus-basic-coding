/* #include <iostream>
using namespace std;
int main(){
   int size,target;
   cin>>size>>target;
   int arr[size];
   int ans = -1;
   for (int i = 0; i < size; i++)
   {
     cin>>arr[i];
   }
   for (int i = 0; i < size; i++)
   {
    if(target== arr[i]){
        ans = i;
        break;
    }
   }
   cout<<ans;
       return 0;
} */
#include <iostream>
using namespace std;
int main()
{
  int arr[100],n,key,found=0;
  cout<<"Enter size of array ";
  cin>>n;
  cout<<"Enter "<<n<<" elements to serach ";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter element to search ";
  cin>>key;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]==key){
      cout<<"Element found at index "<<i;
      found =1;
    }
  }
  if(!found){
    cout<<"Element not found ";
  }
  
    return 0;
}