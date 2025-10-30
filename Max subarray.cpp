
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         int v=arr[i];
    for(int j=i+1;i<n;i++)
    {
        v=max(v,arr[j]);
        cout<<v<<" ";
    }

    cout<<"\n";
     }
     cout<<"\n";
     return 0;
}
