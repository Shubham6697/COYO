#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200],k,num,in=-1,carry=0;
    cin>>n;
    k=n;
    while(k!=0)
    {
        in++;
        a[in]=k%10;
        k/=10;
    }
    for(int i=n-1;i>1;i--)
    {
        for(int j=0;j<=in;j++)
        {
            num=(a[j]*i)+carry;
            a[j]=num%10;
            carry=num/10;
        }
        while(carry!=0)
                {
                    in++;
                    a[in]=carry%10;
                    carry/=10;
                }
    }

    for(int i=in;i>=0;i--)
        cout<<a[i];
}
