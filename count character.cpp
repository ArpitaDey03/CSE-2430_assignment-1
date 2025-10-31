
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin>>str;
    int arr[123]={0};

    for(int i=0;i<str.size();i++)
    {
        arr[str[i]]++;

    }
    for(int i=65;i<=122;++i)
    {
        if(arr[i]!=0)
            cout<<char(i)<<" "<<arr[i]<<endl;
    }
    return 0;
}
