#include<bits/stdc++.h>
using namespace std;

long int answer;
void fun(int n)
{
    if(n==0)
        return;
    int i,pro=1,m=(n*(n-1))/2;
    for(i=m+1;i<=m+n;i++)
        pro *= i;
    answer += pro;
    fun(n-1);
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
        answer=0;
        fun(number);
        cout << answer << endl;
    }
    return 0;
}
