#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int n,n1,num,sum=0;
    int count=0;
    cin>>n;
    num=n;
    n1=n;
    while(num!=0)
    {
        count++;
        num/=10;
    }
    while(n1!=0)
    {
        sum+=pow(n1%10,count);
        n1/=10;
    }
    if(sum==n)
        cout<<n<<" is armstrong number";
    else
        cout<<n<<" is not armstrong number";
}
