#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int vo=0,con=0,dig=0,sp=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
            vo++;
        else if(s[i]>='0' && s[i]<='9')
            dig++;
        else if(s[i]==' ')
            sp++;
        else if((s[i]>'a' && s[i]<='z') || (s[i]>'A' && s[i]<='Z'))
            con++;
    }
    cout<<"Number of vowels is "<<vo<<endl;
    cout<<"Number of consonants is "<<con<<endl;
    cout<<"Number of digits is "<<dig<<endl;
    cout<<"Number of white-spaces is "<<sp<<endl;
}
