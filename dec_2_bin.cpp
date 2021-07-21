#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int num;
    int count=0,a[1000];
    cin>>num;
    while(num!=0)
    {
        a[count]=num%2;
        count++;
        num/=2;
    }
    for(int i=count-1;i>=0;i--)
        cout<<a[i];
    return 0;
}
