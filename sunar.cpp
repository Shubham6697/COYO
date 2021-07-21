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
int sum=0,maxi=INT_MIN,max_value=INT_MIN;
for(int i=0;i<n;i++)
{
sum=max(sum+arr[i],0);
maxi=max(sum,maxi);
max_value=max(max_value,arr[i]);

}
if(maxi==0)
cout<<max_value<<endl;
else
cout<<maxi;
}
