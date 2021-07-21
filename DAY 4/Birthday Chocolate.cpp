#include<bits/stdc++.h>
using namespace std;

int birthday(int s_count, int* s, int d, int m) {
    int i,j,sum,count=0;
    for(i=0;i<s_count;i++)
    {sum=0;
        for(j=i;j<m+i&&((m+i)<=s_count);j++)
        {
            sum+=*(s+j);
        }
            if(sum==d)
            count++;
    }
return count;

}


int main()
{
   int n,s[100],d,m,count;
   cin>>n;      //size of array
   for(int i=0;i<n;i++)
    cin>>s[i];
   cin>>d>>m;
   cout<<birthday(n,s,d,m);
   return 0;
}
