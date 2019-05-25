//Queue implementation using Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void enqueue(Node **head,int data)
{
    struct Node* newnode=(struct Node*) malloc(sizeof(struct Node*));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    struct Node*tmp =*head;
    while(tmp->next)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    return;
}
void print(Node **head)
{
    struct Node* tmp=*head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void dequeue(Node** head)
{
    if(*head==NULL)
    {
        cout<<"Not Possible\n";
        return;
    }
    struct Node* tmp=*head;
    *head=tmp->next;
    return;
}
int main()
{
    struct Node* head=NULL;
    enqueue(&head,10);
    enqueue(&head,20);
    enqueue(&head,30);
    print(&head);
    dequeue(&head);
    dequeue(&head);
    print(&head);
    return 0;
}
