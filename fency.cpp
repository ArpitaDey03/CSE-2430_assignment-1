
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
 int arr[n];
 int sum=0;
 int sumMin=INT_MAX;
 int answerIndex=0;
 int index=0;

 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
     sum+=arr[i];
     if(i-index+1==k)
     {
         if(sum<sumMin)
         {
             answerIndex=index;
             sumMin=sum;
         }
         sum-=arr[index];
         index+=1;
     }
 }
 cout<<(answerIndex+1)<<endl;
 return 0;
}
