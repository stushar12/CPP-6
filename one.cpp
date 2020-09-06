#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main()
{
unordered_set<int> us;
int arr[]={10,8,10,7,7,6};
for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
    if(us.find(arr[i])==us.end())
    {
        us.insert(arr[i]);
    }
    else
    {
        cout<<arr[i]<<"  ";
    }
    
}


}

