#include<bits/stdc++.h>
using namespace std;


int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
         int l[10000],flag=0,max=INT_MIN;
    for(int i=0;i<keyboards_count;i++)
        for(int j=0;j<drives_count;j++)
            if(*(keyboards+i)+(*(drives+j))<=b)
                {
                    if(max<*(keyboards+i)+(*(drives+j)))
                    {
                        max=*(keyboards+i)+(*(drives+j));
                        flag=1;
                    }
                }
    if(flag==1)
    return max;
    else
    return (-1);

}

int main()
{
    int b,n,m,keyboard[1000],drives[1000];
    cin>>b>>n>>m;
    for(int i=0;i<n;i++)
        cin>>keyboard[i];
    for(int i=0;i<m;i++)
        cin>>drives[i];
    cout<<getMoneySpent(n,keyboard,m,drives,b);
    return 0;
}
