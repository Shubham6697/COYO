#include<bits/stdc++.h>
using namespace std;

long long int arr[1000005];
long long int si[1000005];
long long int root(long long int a)
{
    while(a!=arr[a])
    {
        a=arr[a];
    }
    return a;
}
long long int uni(long long int a,long long int b)
{
    long long int x=root(a);
    long long int y=root(b);
    if(x!=y)
    {
        if(si[x]>si[y])
        {
            arr[y]=x;
            si[x]+=si[y];
            si[y]=0;
        }
        else
        {
            arr[x]=arr[y];
            si[y]+=si[x];
            si[x]=0;
        }
    }
}
int main()
{
  long long int n,m,r;
  cin>>n>>m>>r;
  map<long long int,long long int>ss;
  while(m--)
  {
      long long int a;
      cin>>a;
      ss[a]++;
  }
  vector<long long int>v[n+1];
  while(r--)
  {
      long long int a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
  }
  long long int vis[100005]={0};
  long long int ans=0;
  for(long long int i=1;i<=n;i++)
  {
      if(vis[i])
        continue;
      stack<long long int>q;
      q.push(i);
      long long int co=0;
      long long int co1=0;
      while(!q.empty())
      {
          long long int t=q.top();
          q.pop();
          if(vis[t])
            continue;
          co1++;
          if(ss[t]>0)
          {
              co++;
          }
          vis[t]=1;
          for(long long int j=0;j<v[t].size();j++)
          {
              if(vis[v[t][j]]==0)
              {
                  q.push(v[t][j]);
              }
          }

      }
      ans+=(co*co1);
  }
  cout<<ans;
}

