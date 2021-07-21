#include<bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node* create_node(int data)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->info=data;
    new_node->next=NULL;
    return
}

int length(struct node* h)
{
    int c=0;
    while(h!=NULL)
    {
        c++;
        h=h->next;
    }
    return c;
}

void print(struct node *h)
{
    int c=0;
    while(h!=NULL)
    {
        if(c%2==0)
            cout<<h->info<<" ";
        c++;
    }
    return;
}

int main()
{
    struct node *head=create_node(1);
    head->next=create_node(1);
}
