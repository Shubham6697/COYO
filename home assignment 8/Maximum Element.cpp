#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int q;
    short ch;
    stack <int> s,m;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>ch;
        if(ch==1)
        {
            int num;
            cin>>num;
            s.push(num);
            if(!m.empty())
            {
            if(num>=m.top())
                m.push(num);
            }
            else
                m.push(num);
        }
        else if(ch==2)
        {
            if(!s.empty())
            {
                if(s.top()==m.top())
                    m.pop();
                s.pop();
            }
        }
        else
        {
            if(!m.empty())
            cout<<m.top()<<endl;
        }
    }

    return 0;
}
