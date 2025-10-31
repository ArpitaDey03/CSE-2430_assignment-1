
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        long long i,j,cnt=0,c=0;
        map<int,int>mp;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            int x=s[i] -'a';
            mp[x]++;
        }
        for(i=0;i<26;i++)
        {
            if(mp[i]>=2)
                cnt++;
            else if(mp[i]==1)
                c++;
        }
        cout<<cnt+c/2<<endl;
    }
    return 0;
}
