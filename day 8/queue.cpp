#include<bits/stdc++.h>
using namespace std;

int queue1[100],front1=-1,rear=-1;

bool is_full()
{
    return head==99;
}

void push(int x)
{
    if(is_full())
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    queue1[++front1]=x;
    if(front1==0)
        rear++;
}

bool is_Empty()
{
    return rear==-1;
}

void pop()
{
    if(is_Empty())
    {
        cout<<"Queue is underflow"<<endl;
        return;
    }
    rear++;
    return;
}

/*int top()
{
    if(is_Empty())
        return -1;
    return queue1[front1];
}
*/
