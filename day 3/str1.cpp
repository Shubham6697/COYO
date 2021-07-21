#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    int flag=0;
    cin>>s;
    cin>>st;
    int hash1[26];
    fill(hash1,hash1+26,0);
    for(int i=0;i<st.length();i++)
        hash1[st[i]-'a']++;
    for(int i=0;i<s.length();i++)
    {
        if(hash1[s[i]-'a']==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Not Present";
    else
        cout<<"Present";
    return 0;
}
