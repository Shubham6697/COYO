#include<bits/stdc++.h>
using namespace std;
int n ;
int fun(int*a , int i)
{
  if(i==n)
    return 1;

  return a[i]*fun(a,i+1);
}

int main()
{
  int arr[50];
  cout<<"Enter the number of element in array "<<endl;
  cin>>n;
  cout<<endl<<"Enter the element in array "<<endl;
  for(int i=0 ; i<n ;i++)
   cin>>arr[i];

cout<<endl<<"Product is "<< fun(arr,0) ;
  return 0;
}
