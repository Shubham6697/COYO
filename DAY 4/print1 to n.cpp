#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);
    cout<<n <<endl;
    return;
}


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int number;
        cin >> number;
        fun(number);
    }
    return 0;
}
