#include <bits/stdc++.h>

using namespace std;

long int big_sum(long int *arr,int n)
{
    long int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    return sum;
}

int main()
{
    int n;
    long int a[12];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<big_sum(a,n);
    return 0;
}
