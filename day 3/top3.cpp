#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max1=INT_MIN,a[1000];
    cin>>n;     //enter the size of array
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max1<a[i])
            max1=a[i];   //find max element of array to create a new array of max+1 size
    }
    int b[max1+1],m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;   //declaring hashing array and top 3 max frequency variable
    fill(b,b+max1+1,0);      // initializing zero in hash array b[]
    for(int i=0;i<n;i++)
      {
        b[a[i]]++;  //take input in array
      }
      for(int i=0;i<max1+1;i++)        //finding top 3 maximum frequency
       {
           if(b[i]>=m1)
           {
               m3=m2;
               m2=m1;
               m1=b[i];
           }
           else if(b[i]>=m2)
           {
               m3=m2;
               m2=a[i];
           }
           else if(b[i]>=m3)
           {
               m3=b[i];
           }
       }
       cout<<"first maximum repeated element:"<<b[m1]<<" second maximum repeated element :"<<b[m2]<<" third maximum repeated element :"<<b[m3];
      return 0;
}
