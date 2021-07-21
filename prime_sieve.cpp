#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    unsigned long int num;
    bool a[1000000];
    int flag=0;
    cout<<"Enter the number less than 1000000"<<endl;
    cin>>num;
    memset(a,true,num+1);
    a[0]=false;
    a[1]=false;
    for(long int i=2;i<=num;i++)
    {
        if(i==2)
        {
            if(prime(i)==1)
            for(long int j=i*2;j<=num;j+=i)
            {
                a[j]=false;
                if(a[num]==false)
                {
                    flag=1;
                    cout<<"Not Prime"<<endl;
                    break;
                }
            }

        }
        else if(i%2!=0)
        {
            if(prime(i)==1)
            for(long int j=i*2;j<=num;j+=i)
            {
                a[j]=false;
                if(a[num]==false)
                {
                    flag=1;
                    cout<<"Not Prime"<<endl;
                    break;
                }
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        if(a[num]==true)
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    return 0;
}
