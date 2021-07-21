#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<stdio.h>
#include<utility>
#include<algorithm>
#include<iomanip>
#include<functional>
#include<limits>
#include<memory>
#include<cstdlib>
#include<cassert>
#include<cctype>
#include<cfloat>
#include<stack>
#include<queue>
#include<deque>
#include<iterator>
#include<list>
#include<vector>
#include<map>
#include<set>
#include<string.h>
#include<numeric>
#include<ctime>
#include<sstream>

using namespace std;

#define MOD 1000000007
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define minr min_element
#define maxr max_element
#define mh make_heap
#define ph push_heap
#define poh pop_heap
#define sd(n) scanf("%d",&n)
#define sd2(i,j) scanf("%d%d",&i,&j)
#define pd(n) printf("%d\n",n)
#define sld(n) scanf("%lld",&n)
#define sld2(i,j) scanf("%lld%lld",&i,&j)
#define pld(n) printf("%lld\n",n)
#define pld2(i,j) printf("%lld% lld\n",i,j);
#define forb(i,n) for(int i=0;i<int(n);i++)
#define fora(i,l,h) for(int i=int(l);i<=int(h);i++)
#define ford(i,n) for(int i=int(n);i>=0;i--)
#define all(a) a.begin(),a.end()
#define set(a,x) memset(a,x,sizeof(a))
#define li long long int
li arr[1000005];
li si[1000005];
li root(li a)
{
    while(a!=arr[a])
    {
        a=arr[a];
    }
    return a;
}
li uni(li a,li b)
{
    li x=root(a);
    li y=root(b);
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
  li n,m,r;
  cin>>n>>m>>r;
  unordered_map<li,li>ss;
  while(m--)
  {
      li a;
      cin>>a;
      ss[a]++;
  }
  vector<li>v[n+1];
  while(r--)
  {
      li a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
  }
  li vis[100005]={0};
  li ans=0;
  for(li i=1;i<=n;i++)
  {
      if(vis[i])
        continue;
      stack<li>q;
      q.push(i);
      li co=0;
      li co1=0;
      while(!q.empty())
      {
          li t=q.top();
          q.pop();
          if(vis[t])
            continue;
          co1++;
          if(ss[t]>0)
          {
              co++;
          }
          vis[t]=1;
          for(li j=0;j<v[t].size();j++)
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
