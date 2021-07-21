#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag=0,l;
    cin>>s;
    l=s.length();
    for(int i=0;i<l/2;i++)
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    if(flag==0)
        cout<<"true";
    else
        cout<<"false";
}
