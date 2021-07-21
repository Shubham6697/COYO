#include<bits/stdc++.h>
using namespace std;

int stack1[100],head=-1;

bool is_full()
{
    return head==99;
}

void push(int x)
{
    if(is_full())
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    stack1[++head]=x;
}

bool is_Empty()
{
    return head==-1;
}

void pop()
{
    if(is_Empty())
    {
        cout<<"Stack is underflow"<<endl;
        return;
    }
    head--;
    return;
}

int top()
{
    if(is_Empty())
        return -1;
    return stack1[head];
}

bool is_palindrome(string st)
{
    int j=-1,n=st.length();
    for(int i=0;i<n/2;i++)
        push(st[i]-'a');
    for(int i=(n/2)+1;i<st.length();i++)
    {
        if(st[++j]-'a'==st[i]-'a')
            pop();
    }
    return is_Empty();
}


int main()
{
    string s;
    cin>>s;
    if(is_palindrome(s))
        cout<<"String is palindrome"<<endl;
    else
        cout<<"String is not palindrome"<<endl;
    return 0;
}



//if(n&1)
