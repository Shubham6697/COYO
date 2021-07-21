#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the two number: ";
    cin>>x;
    cin>>y;
    cout<<"Before Swapping :"<<" x="<<x<<" y="<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swapping :"<<" x="<<x<<" y="<<y;
}
