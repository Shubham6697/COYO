#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int hash_a[26],hash_b[26],count=0;
fill(hash_a,hash_a+26,0);
fill(hash_b,hash_b+26,0);
for(int i=0;i<a.length();i++)
    hash_a[a[i]-'a']++;
for(int i=0;i<b.length();i++)
    hash_b[b[i]-'a']++;
for(int i=0;i<26;i++)
{
    if(hash_a[i]!=hash_b[i])
    {
        if(hash_a[i]-hash_b[i]>=0)
            count+=hash_a[i]-hash_b[i];
        else
            count+=hash_b[i]-hash_a[i];
    }
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
