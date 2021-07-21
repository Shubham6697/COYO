#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],f_max,flag=0,s_max=-100,t_max;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        f_max=a[0];
        else
            if(f_max<=a[i])
            {
                s_max=f_max;
                f_max=a[i];
                flag=1;
            }
            if(flag==0)
                {
                    if(a[i]!=f_max)
                    if(s_max<a[i])
                    {
                        s_max=a[i];
                    }
                }
    }
    t_max=-100;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=f_max && a[j]!=s_max)
            if(t_max<a[j])
                t_max=a[j];
    }
    if(t_max==-100)
        t_max=f_max;
    cout<<"first max= "<<f_max<<" second max= "<<s_max<<" third max= "<<t_max;
    return 0;
}
