#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int up=0,lo=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            up++;
        else if(s[i]>=97 && s[i]<=122)
            lo++;
    }
    cout<<"upper case is "<<up<<endl<<"lowercase is "<<lo;
}
