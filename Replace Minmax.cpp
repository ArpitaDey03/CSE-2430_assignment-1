

#include <bits/stdc++.h>
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

    int maxelement =arr[0];
    int maxIndex=0;

    int minelement =arr[0];
    int minIndex=0;

    for(int i=1;i<n;i++)
    {
        if(maxelement<arr[i])
        {

           maxelement = arr[i];
           maxIndex=i;

           }

            if(minelement>arr[i])
        {

           minelement = arr[i];
           minIndex=i;

           }
        }
        swap(arr[minIndex],arr[maxIndex]);
       for(int i=0;i<n;i++) cout<<arr[i]<<" ";

        return 0;
    }

