#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="";
    cin>>s;
    int hash[26];
    fill(hash,hash+26,0);
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(hash[i]>=1)
        {
            p+=char('a'+i)+to_string(hash[i]);
        }
    }
    cout<<p;
}
