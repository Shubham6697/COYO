#include<bits/stdc++.h>
using namespace std;

int pro(int p,int n)
{
    if(n==0)
        return 1;
    int x=pro(p,n/2);
    if(n%2==0)
        return x*x;
    return p*x*x;
}

int main()
{
    int a=2,b=3;
    cout<<pro(a,b);
}
