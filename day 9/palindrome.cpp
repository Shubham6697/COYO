#include<bits/c++.h>
using namespace std;
int palindrome(string str)
{
    int n=str.length();
    bool dp[n][n];
    int num=1;
    memset(dp,false,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        dp[i][i]=true;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i][i+1]=true;
            num=2;
        }

    }

    for(int l=3;l<=n;l++)
    {
        for(int i=0;i<=n-l;i++)
        {
            int j
        }
    }
}

int main()
{
    string str;
    cin>>str;
    cout<<palindrome(str);
}
