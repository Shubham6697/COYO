#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    while(n!=0)
    {
        cout<<n%10<<endl;
        n/=10;
    }
    return 0;
}
