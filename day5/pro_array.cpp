#include<bits/stdc++.h>
using namespace std;

int pro(int *p,int n)
{
    if(n==0)
        return 1;
    return p[n-1]*pro(p,n-1);
}

int main()
{
    int a[5]={1,2,3,4,5};
    cout<<pro(a,5);
}
