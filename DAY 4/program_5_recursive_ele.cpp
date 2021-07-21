#include<bits/stdc++.h>
using namespace std;

void print(int *p,int start,int num)
{
    if(start>=num)              //termination condition
        return;
    cout<<*(p+start)<<" ";
    return print(p,start+1,num);        //recursive self call
}



int main()
{
int a[100],N;
   cin>>N;          // size of array
    for(int i=0;i<N;i++)
        cin>>a[i];      //take input in array
   print(a,0,N);  //calling function
   return 0;
}
