#include<bits/stdc++.h>
using namespace std;

int value;

int fun(int *arr,int n,int index)
{
    if(index==n)
        return -1;

    if(arr[index]==value)
        return index;

    return fun(arr,n,index+1);
}

int main()
{
    int n,a[100];
    cin>>n; //enter the number of element of array.

    for(int i=0;i<n;i++)
        cin>>a[i];      // array input.

    cin>>value;     //value to be find in array.

    int k=fun(a,n,0);     //function calling.
    if(k==-1)
        cout<<"Element are not in array."<<endl;
    else
        cout<<"Element are found in array at index "<<k<<endl;

    return 0;
}
