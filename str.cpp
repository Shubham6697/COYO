#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,num;
    int sum=0;
    getline(cin,s);
    int i=0;
    while(true)
    {
        num="";
        if(s[i]>='0' && s[i]<='9' && i<s.length())
        {
         while(s[i]>='0' && s[i]<='9' && i<s.length())
         {
             num+=s[i];
             i++;
         }
         sum+=atoi(num.c_str());
        }
        else
            i++;
         if(i>=s.length())
               break;
    }
    cout<<sum;
}
