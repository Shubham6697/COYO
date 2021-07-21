#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,size,ele;
    vector<vector<int> >v;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        cin>>size;
        for(int j=0;j<size;j++)
        {
            cin>>ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
        temp.clear();
    }
    int i,j;
    for(int k=0;k<q;k++)
    {
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }
    return 0;
}

