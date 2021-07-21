#include<bits/stdc++.h>
using namespace std;
int value;

int binary_Search(int *arr,int start, int endi)
{
    int mid;
    if(endi >= start)
    {
        mid = start + (endi - start) / 2;

        if (arr[mid] == value)
            return mid;


        if (arr[mid] > value)
            return binary_Search(arr, start, mid - 1);


        return binary_Search(arr, mid + 1, endi);
    }
    return -1;
}


int main()
{

    int a[1000],n;
    cout<<"enter the number of element of array "<<endl;
    cin>>n;     //enter the number of element of array.

    cout<<endl<<"enter the element in array "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];  //enter the element in array.

    cout<<endl<<"Enter the searching element "<<endl;
    cin>>value;        //searching element.

    int k = binary_Search(a, 0, n - 1);
    if(k == -1)
        cout<<"Element not found in array";
    else
        cout<<"Element found in array";
    return 0;
}
