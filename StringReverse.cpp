#include <iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    int ptr1 =0,ptr2 =name.size()-1;
    while ((ptr1<ptr2))
    {
        char ch =name[ptr1];
        name[ptr1]= name[ptr2];
        name[ptr2]= ch;
        ptr1++;
        ptr2--;

    }
    cout<<"Reverse String: "<<name;
    
    return 0;
}