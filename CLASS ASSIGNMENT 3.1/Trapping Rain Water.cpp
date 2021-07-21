#include<bits/stdc++.h>
using namespace std;

int trapping_rain_water(long int *arr,long int n)
{
    long int tot_water=0,front[n],rear[n],f_max=INT_MIN,r_max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(f_max<arr[i])
            f_max=arr[i];
        front[i]=f_max;
    }
    fill(rear,rear+n,0);
    for(int i=n-1;i>=0;i--)
    {
        if(r_max<arr[i])
            r_max=arr[i];
        rear[i]=r_max;
    }

    for(int i=0;i<n;i++)
        tot_water+=min(front[i],rear[i])-arr[i];
    return tot_water;
}


int main()
{
    int t;
    cin>>t;
    long int n,*arr;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        arr=(long int*)malloc(n*sizeof(long int));
        for(int j=0;j<n;j++)
            cin>>*(arr+j);
        cout<<trapping_rain_water(arr,n)<<endl;
    }
}
