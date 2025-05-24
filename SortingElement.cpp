#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array ";
    cin >> size;
    int arr[size];
    cout<<"Enter "<<size<<" elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (int z = i + 1; z < size; z++)
        {
            if (arr[i] > arr[z])
            {
                swap(arr[i], arr[z]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}