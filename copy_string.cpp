#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,copy_s="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        copy_s+=s[i];
    cout<<copy_s;
}
