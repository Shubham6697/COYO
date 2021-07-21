#include<bits/stdc++.h>
using namespace std;

int queue1[10],front1=-1,rear=-1,count1=0;

bool is_full()
{
    return count1==10;
}

void push(int x)
{
    if(is_full())
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    if(rear==0)
        front1=0;
    queue1[++rear]=x;
    count1++;

}

bool is_Empty()
{
    return count1==0;
}

void pop()
{
    if(is_Empty())
    {
        cout<<"Queue is underflow"<<endl;
        return;
    }
    front1++;
    count1--;
    return;
}
int main()
{
    int ch;
    int x;
    while(true)
    {
        cout<<endl<<"Press 1: for push\nPress 2: for pop\nPress 3: for exit "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1: cout<<"Enter the element that you want to push ";
                    cin>>x;
                    push(x);
                    break;
        case 2: pop();
                  break;
        case 3: exit(1);

        default : cout<<"Please enter valid choice"<<endl;
        }
    }
    return 0;
}
