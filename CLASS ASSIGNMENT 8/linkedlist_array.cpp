#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
struct Node* temp;

void insert1(int new_data) {
    int len=0;
    len++;
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   if(len==1)
   {
    new_node->data = new_data;
    new_node->next = NULL;
    temp = new_node;
    head = temp;
   }
   else{
    new_node->data = new_data;
    new_node->next = NULL;
    temp->next = new_node;
    temp=new_node;
   }
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }

}
struct Node* fun(int *arr,int n)
{
    for(int i=0;i<n;i++)
        insert1(arr[i]);
    return head;
}

int main() {
    int a[1000],n;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the element of array ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Araay is ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"the head pointer is "<<fun(a,n)<<endl;
    cout<<"The linked list is ";
    display();
   return 0;
}



