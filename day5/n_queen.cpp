
#include<bits/stdc++.h>
using namespace std;

int n;

bool fun(int i)
{
    if(i==n)
        return true;
    for(int j=0;j<n;j++)
    {
        if(safe(i,j))
        {
            a[i][[j]=1;
            if(fun(i+1))
                return true;
            a[i][j]=0;
        }
    }
    return false;
}


int main()
{
    cin>>n;
    cout<<n_queen(n);
    return 0;
}
