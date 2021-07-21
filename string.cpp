#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            st+=s[i];
        else
            st+="%20";
    }
    cout<<st;
}
