#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int h[26]={0},flag=0;
    cin>>s;
    cin>>s1;
    if(s1.length()!=s.length())
    {
        cout<<"Not Possible";
        flag=1;
    }
    else
        for(int i=0;i<s1.length();i++)
        {
            h[s[i]-'a']++;
            h[s1[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(h[i]!=0)
            {
                cout<<"Not Possible";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Possible";
    return 0;
}
