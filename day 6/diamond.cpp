#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0,arr[100][100];
    cout<<"enter the size of array (only odd size): ";
    cin>>n;
    cout<<endl<<"Enter the element of array ";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    int mid=n/2,c=1;

    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
            sum1+=arr[i][mid];

        else if(i<=mid)
            sum1+=arr[i][mid-i]+arr[i][mid+i];

        else
        {
            sum1+=arr[i][i-mid]+arr[i][(n-1)-i+mid];
        }
    }
    sum2= arr[mid][mid-1] + arr[mid][mid+1] + arr[mid-1][mid] +arr[mid+1][mid];
    cout<<"Sum of smallest diamond "<<sum2<<endl;
    cout<<"Sum of largest diamond "<<sum1<<endl;
    cout<<"Sum of smallest diamond & largest diamond "<<sum1+sum2<<endl;
    return 0;
}
