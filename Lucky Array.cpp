
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[0])
        {
            count++;
        }
        else break;
    }
    if(count%2)

        cout<<"Lucky\n";
    else
        cout<<"Unlucky\n";
    return 0;
}
