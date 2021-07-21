#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],sum=0,maxi=INT_MIN,max_value=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=max(sum+a[i],0);
        maxi=max(sum,maxi);
        max_value=max(max_value,a[i]);
    }
    if(maxi==0)
        cout<<max_value;
    else
        cout<<maxi;
}
