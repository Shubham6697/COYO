#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100],N;
   cin>>N;      //size of array
   for(int i=0;i<N;i++)     //take input in array
    cin>>a[i];
   for(int* p=a;p<a+N;p++)      //print element of array using pointer
        cout<<*p<<" ";
return 0;
}
