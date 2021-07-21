#include<bits/c++.h>
using namespace std;

map<int,vector<pair<int,int> > >mp;

int main()
{
    int num_node,num_edge,a,b,d;
    bool c;
    cin>>num_node>>num_edge;
    while(num_edge--)
    {
        cin>>a>>b>>c>>d;
        mp[a].push_back(make_pair(b,d));
        if(c==false)
        {
            mp[b].push_back(make_pair(a,d));
        }
    }

    int x;
    cin>>x;

    for(auto y:mp[x])
    {
        cout<<y.first<<endl;
    }


    return 0;
}
