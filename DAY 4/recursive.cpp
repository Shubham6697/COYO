#include<bits/stdc++.h>
using namespace std;
int sum(int *p,int num)
{
    if(num==0)
        return 0;
    return p[num-1]+sum(p,num-1);
}


int main()
{
   int a[100],N;
   cin>>N;          // size of array
    for(int i=0;i<N;i++)
        cin>>a[i];      //take input in array
   int *poi=a;
   cout<<sum(poi,N);
   return 0;
}
