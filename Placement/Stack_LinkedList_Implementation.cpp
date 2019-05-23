//Stack using LinkedList
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void pushFromBack(Node** head,int data)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    struct Node* tmp=*head;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }

    tmp->next=newnode;
    return;
}
void print(Node** head)
{
    if(head!=nullptr)
    {
        struct Node* tmp=*head;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<" ";
            tmp=tmp->next;
        }
    }
    cout<<endl;
}
void pop(Node** head)
{
    if(head==NULL)
    {
        return;
    }
    struct Node* tmp=*head;
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=NULL;
    return;
}
int main()
{

    struct Node* head=NULL;
    pushFromBack(&head,10);
    pushFromBack(&head,20);
    pushFromBack(&head,30);
    pushFromBack(&head,40);
    print(&head);
    pop(&head);
    pop(&head);
    print(&head);
    return 0;
}
