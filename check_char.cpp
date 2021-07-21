#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int count=0;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"Enter a character : ";
    cin>>ch;
    for(int i=0;i<s.length();i++)
        if(s[i]==ch)
            count++;
    cout<<count;
}
