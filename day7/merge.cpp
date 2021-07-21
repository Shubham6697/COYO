#include<bits/stdc++.h>
using namespace std;

void merge(int *a,int l,int mid,int r)
{
    int n=e-l+1,k=0,i=0,j=0;
    int arr[n];
    while(k<n)
    {
        if(a[i++]<=a[j++])

    }
}


void merge_sort(int *a,int s,int e)
{
    if(s<e)
    {
        int mid=s+(e-s)/2;
        merge_sort(a,s,mid);
        merge_sort(a,mid+1,e);
        merge(a,s,mid,e);
    }
    return;
}
