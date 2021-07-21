#include<bits/stdc++.h>
int main()
{
    long int n,a[100000];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    f_max=a[0];
    s_max=a[1];
    t_max=a[2];
    if(f_max<s_max)
    {
        temp=s_max;
        s_max=f_max;
        f_max=temp;
        if(f_max<t_max)
        {
            temp=f_max;
        }
    }

}
