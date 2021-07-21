#include<bits/stdc++.h>
using namespace std;

int n=6,f,i=0;

bool find(int *a,int i)
{
    if(i==n)
        return false;
    if(a[i]==f)
        return true;

    return find(a,i);
}

int main()
{
    int a[]={1,221,13,34,54,66};
    cin>>f;
    //for(int i=0;i<n;i++)
     //   if(f==a[i])
       // {
         //   flag=1;
           // break;
        //}

    if(find(a,i)==true)
        {cout<<"available"<<endl;
        cout<<i+1;}
    else
        cout<<"not available";
}
