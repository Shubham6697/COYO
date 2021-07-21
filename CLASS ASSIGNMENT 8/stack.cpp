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
    cout<<"Pushed"<<endl;
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
    cout<<"Popped"<<endl;
    return;
}

int top()
{
    if(is_Empty())
        return -1;
    return stack1[head];
}



int main()
{
    char ch;
    int x;
    while(true)
    {
        cout<<endl<<"Press 1: for push\nPress 2: for pop\nPress 3: for top\nPress 4: for exit "<<endl;
        cin>>ch;
        switch(ch)
        {
        case '1': cout<<"Enter the element that you want to push ";
                    cin>>x;
                    push(x);
                    break;
        case '2': pop();
                  break;
        case '3': cout<<"The top of the Stack is "<<top()<<endl;
                    break;
        case '4': exit(1);

        default : cout<<"Please enter valid choice"<<endl;
        }
    }
    return 0;
}
