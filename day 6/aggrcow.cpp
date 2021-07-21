#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,n,arr[1000],min1=INT_MAX;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>c;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr, arr+n);
        for(int j=0;j<n-1;j++)
        {
            for(int k=i+1;k<n;k++)
            {
                if(arr[k]-arr[i]!=1)
                if(min1>arr[k]-arr[i])
                    min1=arr[k]-arr[i];
            }
        }
    }
    cout<<min1;
    return 0;
}
