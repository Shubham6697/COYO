#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>vec;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            vec[i].push_back(j);
        }
    }
    vec[4].push_back(100);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
