#include<bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
int main()
{
    int n;
    cout<<"Enter the number of element in array ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter element of array ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    return 0;
}
