class Solution {
public:
    bool isSubsequence(string s, string t) {
    int len=s.length(),count=0;
    for(int i=0;i<t.length();i++)
    {
        if(s[count]==t[i])
            count++;
        if(count==len)
            break;
    }
    if(count==len)
        return true;
    return false;
    }
};
