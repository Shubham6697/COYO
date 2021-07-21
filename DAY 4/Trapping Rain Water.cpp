#include<bits/stdc++.h>
using namespace std;

int trapping_rain_water(long int *arr,long int n)
{
    long int tot_water=0,end1[n],front1[n];
    front1[0]=*(arr+0);
    for(long int i=1;i<n;i++)
        if(front1[i-1]>=*(arr+i))
            front1[i]=front1[i-1];
        else
            front1[i]=*(arr+i);
        end1[n-1]=arr[n-1];
    for(long int i=n-2;i>=0;i--)
        if(end1[i+1]>=*(arr+i))
            end1[i]=end1[i+1];
        else
            end1[i]=*(arr+i);
    for(long i=0;i<n;i++)
        if(front1[i]<=end1[i])
            tot_water+=(front1[i]-*(arr+i));
        else
            tot_water+=(end1[i]-*(arr+i));
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
