#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node* left;
    struct node* right;
};


struct node* create_node(int data)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->info=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return
}


int main()
{
    struct node* root=create_node(1);
    root->left=create_node(2);
    root->left=create_node(3);
    root->left-left=create_node();
    root->left=create_node(2);
    root->left=create_node(2);
    root->left=create_node(2);
    root->left=create_node(2);
    root->left=create_node(2);
    root->left=create_node(2);
    root->left=create_node(2);
    return 0;
}

