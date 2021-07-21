#include<bits/stdc++.h>
using namespace std;

int power(int i,int x,int n,int curr_sum)
{
    if(curr_sum==x)
        return 1;
    if(curr_sum>x || pow(i,n)>x)
        return 0;
    return power(i+1,x,n,curr_sum+pow(i,n))+power(i+1,x,n,curr_sum);
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(1,x,n,0);
    return 0;
}
