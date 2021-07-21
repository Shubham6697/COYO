#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if(s[i]>='0' && s[i]<='9' && i<s.length())
            sum+=(s[i]-48);
    cout<<sum;
}
