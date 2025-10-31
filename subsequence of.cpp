
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    int subarr[k];

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<k;i++) cin>>subarr[i];

    int index=0;

    for(int i=0;i<n and index<k;i++){
        if(arr[i]==subarr[index]){
            index++;
        }
    }
    if(index==k)
        cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
