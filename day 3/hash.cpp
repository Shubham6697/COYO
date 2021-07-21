#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max1=INT_MIN,max2=INT_MIN,a[1000];
    cin>>n;     //enter the size of array
    for(int i=0;i<n;i++)
    {
        cin>>a[i];      //take input in array
        if(max1<a[i])
            max1=a[i];   //find max element of array to create a new array of max+1 size
    }
    int b[max1+1];
    fill(b,b+max1+1,0);
    for(int i=0;i<n;i++)
      {
        b[a[i]]++;
        if(max2<b[a[i]])
            max2=b[a[i]];   //gives max frequency
      }
    cout<<max2;
}
