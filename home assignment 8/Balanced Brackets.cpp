#include<bits/stdc++.h>
#include<stack>
using namespace std;

string check(string str)
{
    stack <char> s;
    for(int j=0;j<str.length();j++)
    {
        if(str[j]=='[' || str[j]=='(' || str[j]=='{' )
            s.push(str[j]);
        else
        {
            if(!s.empty())
            {
                if(s.top()=='{' && str[j]=='}')
                    s.pop();
                else if(s.top()=='[' && str[j]==']')
                    s.pop();
                else if(s.top()=='(' && str[j]==')')
                    s.pop();
                else
                    return "NO";
            }
            else
                return "NO";
        }
    }
    if(s.empty())
        return "YES";
    return "NO";
}
int main()
{
    string str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        cout<<check(str)<<endl;

    }
    return 0;
}
