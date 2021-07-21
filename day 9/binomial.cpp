#include<bits/stdc++.h>
using namespace std;

int dp[1000];
fill(dp,dp+1000,-1);
dp[0]=1; dp[1]=1;
int binomial(int n)
{
    if(dp[n]==-1)
        return dp[n];

    dp[n]=binomial(n-1)*n;
    return dp[n];

}



int main()
{

    int n,k;
    cin>>n>>k;
    cout<<binomial(n,k);
}
