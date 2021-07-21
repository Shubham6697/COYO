#include<bits/stdc++.h>
using namespace std;

long long int binary(long long int a[],
                     long long int search,
                     long long int e,
                     long long int s)
{
    long long int mid;

        mid=(e+s)/2;
        if(search==a[mid] || s==mid)
            return mid;
        else if(search<a[mid])
        {
            if(search>a[mid-1])
                return mid-1;
            else
                 binary(a,search,mid,s);
        }
        else
        {
            if(search<a[mid+1])
                return mid;
            else
                 binary(a,search,e,mid);
        }


}

int main()
{
    int n,q;
    cin>>n>>q;
    long long int x,m[n][2],h[n],temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i][0]>>m[i][1];
        temp+=m[i][1]-m[i][0]+1;
        h[i]=temp;
    }
    for(int i=0;i<q;i++)
    {
        cin>>x;
        long long int c=binary(h,x,n-1,0);
        if(x>h[c])
            cout<<m[c+1][0]+(x-h[c]-1)<<endl;
        else if(x==h[c])
            cout<<m[c][1]<<endl;
        else
            cout<<m[c][0]+(x-1)<<endl;

    }
    return 0;
}
