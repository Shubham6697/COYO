#include<bits/stdc++.h>
using namespace std;

int is_vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else if(ch=='A' ||  ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(is_vowel(s[i])==1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
