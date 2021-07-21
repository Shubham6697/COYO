#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
int count[26]={0},h[26],c=0;

for(int i=0;i<s.length();i++)
    count[s[i]-'a']++;



for(int i=0;i<25;i++)
{
    if(count[i]!=0)
    {
        h[c]=count[i];
        c++;
    }

}
int min=*min_element(h,h+c),min_count=0;
int max=*max_element(h,h+c),max_count=0;
cout<<max<<min;
for(int i=0;i<c;i++)
{
    if(max==h[i])
        max_count++;
    else if(min==h[i])
        min_count++;
}
if(max_count==1 && min_count==1)
    return "NO";
if(max==min)
    return "YES";
if(max_count==1 && max-min==1)
    return "YES";
if(min_count==1 && min==1)
    return "YES";

return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
