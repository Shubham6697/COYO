#include<bits/stdc++.h>
using namespace std;

void palindrome(string str)
{
    int n=str.length();
    bool dp[n][n];
    memset(dp,false,sizeof(dp));

    int max_length=1;
    for(int i=0;i<n;i++)
        dp[i][i]=true;

}

int main()
{
    string s;
    cin>>s;
    palindrome(s);
}
