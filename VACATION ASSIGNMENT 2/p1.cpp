#include<bits/stdc++.h>
using namespace std;
void findroot(int a,int b,int c)
{
    int dis;
    float d;
    dis=b*b-4*a*c;
    if(dis>0)
    {
        cout<<"Real and Distinct"<<endl;
        d=sqrt(dis);
        cout<<(-b-d)/(2*a)<<" "<<(-b+d)/(2*a);
    }
    else if(dis==0)
    {
        cout<<"Real and Equal"<<endl;
        d=sqrt(dis);
        cout<<(-b)/(2*a);
    }
    else
    {
        cout<<"Imaginary"<<endl;
    }
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    findroot(a,b,c);

    return 0;
}
