// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for (int i = 0; i < n; i++)
//     {
//       cin>>arr[i];
//     }
//     map<int,int>mp;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         mp[arr[i]]++;
//     }
    
//     for (int i = 0; i <=n; i++)
//     {
//         if(mp[i]==0)
//         {
//             cout<<"missing value "<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"no miss value found";
//     return -1;
// }

// //optimal solution

#include <iostream>
#include<vector>
using namespace std;
int missingnum(vector<int>&nums){
    int n= nums.size();
    int sum=n*(n+1)/2;
for (int i = 0; i < n; i++)
{
    /* code */
    sum-=nums[i];
}


return sum;
}
int main()
{
    int n;
    cout<<"enter num elements";
    cin>>n;
    vector<int>nums(n);
    cout<<"enetr "<<n<<"num form 0 "<<n<<"one missing value \n";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int missing =missingnum(nums);
    cout<<"missing num "<<missing;
    
   
    return 0;
}