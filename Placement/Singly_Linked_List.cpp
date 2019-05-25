#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
//Inserting element into SLL
/*
1) At the front of the linked list
2) After a given node.
3) At the end of the linked list.
4) Insert element at sorted place and given sorted linked list
*/
void pushFront(Node** head,int data)
{
    struct Node* newnode=(struct Node*) malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
}
void pushAfterData(struct Node** head,int n,int data)
{
    if(head==NULL)
    {
        cout<<"Cannot be NULL!!";
        return;
    }
    struct Node* tmp=*head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
        if(tmp->data==n)
        {
            break;
        }
    }
    if(tmp->data==n)
    {
        struct Node* newnode = (struct Node*) malloc(sizeof(struct Node*));
        newnode->data=data;
        newnode->next=tmp->next;
        tmp->next=newnode;
    }
    else if(tmp->next==NULL)
    {
        cout<<"Cannot insert "<<data<<" element "<<n<<" not found\n";
    }
    else
    {
        struct Node* newnode = (struct Node*) malloc(sizeof(struct Node*));
        newnode->data=data;
        newnode->next=tmp->next;
        tmp->next=newnode;
    }
}

void pushAfterNode(struct Node* pnode,int data)
{
    if(pnode==NULL)
    {
        cout<<"Cannot be NULL!!";
        return;
    }
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node*));
    newnode->data=data;
    newnode->next=pnode->next;
    pnode->next=newnode;
}

void pushEnd(Node** head,int data)
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
void pushSortWay(struct Node** head,int data)
{
    struct Node* tmp=*head;
    struct Node* newnode =(struct Node*)malloc(sizeof(struct Node*));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    while(tmp->next!=NULL)
    {
        if(tmp->data < data && tmp->next->data>data)
            break;
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
// Printing SLL
void printList(struct Node *head)
{
    struct Node* tmp= head;
    cout<<"Element in Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
//Detecting Loop in SLL
void detectLoop(struct Node** head)
{
    struct Node* slow=*head;
    struct Node* fast=*head;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            cout<<"Loop Detected\n";
            return ;
        }
    }
    cout<<"Loop not Detected\n";
    return;
}
//Display data for Nth Node
void dispNth(struct Node** head,int cnt)
{
    struct Node* tmp=*head;
    while(tmp->next!=NULL && --cnt)
    {
        tmp=tmp->next;
    }
    if(tmp!=nullptr)
    {
        cout<<tmp->data<<endl;
    }
    else
    {
        cout<<"Node not present\n";
    }
}
//Given pointer a delete node without traversing.
void deleteNodep(struct Node* nodep)
{
    struct Node* tmp=nodep->next;
    nodep->data=tmp->data;
    nodep->next=tmp->next;
    free(tmp);
}
//Delete Nth node
void delNth(struct Node** head,int p)
{
    struct Node* tmp=*head;
    while(tmp->next!=nullptr && --p)
    {
        tmp=tmp->next;
    }
    struct Node* t=tmp->next;
    tmp->data=t->data;
    tmp->next=t->next;
    free(t);
}
//Counting Frequency of Elements
void cntFreq(struct Node** head,int p)
{
    map<int,int> m;
    struct Node* tmp=*head;
    while(tmp!=NULL)
    {
        m[tmp->data]++;
        tmp=tmp->next;
    }
    // cout<<"Frequency of Elements in Linked List\n";
    if(m.find(p)==m.end())
    {
        cout<<"Element not found\n";
    }
    else
    {
        cout<<"Frequency of "<<p<<" is "<<m.find(p)->second<<endl;
    }
}
//Reversing a Linked List
void revList(struct Node** head)
{
    struct Node* prev=NULL,*curr=*head,*Next=NULL;
    while(curr!=NULL)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    *head=prev;
}
//Checking if list is palindrome or not, using stack
void checkPalindrome(struct Node** head)
{
    stack<int> st;
    struct Node* tmp1= *head;
    struct Node* tmp2= *head;
    while(tmp1!=NULL)
    {
        //cout<<tmp1->data<<" ";
        st.push(tmp1->data);
        tmp1=tmp1->next;
    }
  //  cout<<endl;
    int flag=0;
    while(tmp2!=NULL)
    {
        //cout<<tmp2->data<<" ";
        if(st.top()==tmp2->data)
        {
            st.pop();
        }
        else
        {
            flag=1;
        }
        tmp2=tmp2->next;
    }
    if(flag)
        cout<<"Not Palindrome\n";
    else
        cout<<"Palindrome \n";
}
//Get intersection of two linked list
void getIntersection(struct Node** head1,struct Node** head2)
{
    struct Node* tmp1=*head1;
    while(tmp1!=NULL)
    {
        struct Node* tmp2=*head2;
        while(tmp2!=NULL)
        {
            if(tmp1->data==tmp2->data)
            {
                cout<<tmp1->data<<" ";
            }
            tmp2=tmp2->next;
        }
        tmp1=tmp1->next;
    }
    cout<<endl;
}
//Remove duplicate element from sorted array
void removeDuplicate(struct Node** head)
{
    struct Node* tmp1=*head;
    struct Node* tmp;
    if(tmp==NULL)
    {
        return;
    }
    while(tmp->next!=nullptr)
    {
        if(tmp->data==tmp->next->data)
        {
            tmp1=tmp->next->next;
            free(tmp->next);
            tmp->next=tmp1;
        }
        else
        {
            tmp=tmp->next;
        }
    }
}
//Remove element from LinkedList for unsorted array
void removeDup(struct Node** head)
{
    struct Node* tmp1=*head,*tmp2,*dup;
    while(tmp1 && tmp1->next)
    {
        tmp2=tmp1;
        while(tmp2->next)
        {
            if(tmp1->data==tmp2->next->data)
            {
                dup=tmp2->next;
                tmp2->next=tmp2->next->next;
                delete(dup);
            }
            else
            {
                tmp2=tmp2->next;
            }
        }
        tmp1=tmp1->next;
    }
}
//Move Last element to first
void moveEtoF(struct Node **head)
{
    struct Node* tmp1=*head,*tmp2=NULL;
    while(tmp1->next!=NULL)
    {
        tmp2=tmp1;
        tmp1=tmp1->next;
    }
    tmp2->next=NULL;
    tmp1->next=*head;
    *head=tmp1;
}
// Moving First Element to End
void moveFtoE(struct Node** head)
{
    struct Node* tmp1=*head,*tmp2=*head;
    while(tmp2->next)
    {
        tmp2=tmp2->next;
    }
    *head=tmp1->next;
    tmp1->next=NULL;
    tmp2->next=tmp1;
    //cout<<d<<endl;
}
//Print the middle element of the Linked List in O(n)
void getMiddleElement(struct Node** head)
{
    struct Node* slow=*head;
    struct Node* fast=*head;
    int d;
    while(fast->next!=NULL && fast!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        d=slow->data;
    }
    cout<<d<<endl;
}
int main()
{
    struct Node* head = NULL;
//  inserting from front
    pushFront(&head,10);
    pushFront(&head,10);
//  inserting from end
    pushEnd(&head,5);
//  inserting after specific node
    pushAfterNode(head->next,6);
//  inserting after particular data if found (add,key,data)
    pushAfterData(&head,5,5);

//Detecting Loop
    //head->next->next=head;
    //detectLoop(&head);
//Display Nth node
    //dispNth(&head,2);
//Delete pointer using free() :FAST method
    //deleteNodep(head->next);
//Normal delete method using position
   //delNth(&head,2);
//Count freq of elements given element
   //cntFreq(&head,10);
//Reverse a Linked List
    //revList(&head);
//Check Linked List is palindrome or not
   // checkPalindrome(&head);
//Inserting the element in sorted Linked List
   // pushSortWay(&head,3);
//Get Intersection b/w two linked list
    /*
    struct Node* head1=NULL;
    struct Node* head2=NULL;
    pushFront(&head1,2);
    pushFront(&head1,4);
    pushFront(&head1,1);
    pushFront(&head1,3);
    pushFront(&head1,5);
    pushFront(&head2,1);
    pushFront(&head2,2);
    pushFront(&head2,3);
    pushFront(&head2,4);
    pushFront(&head2,5);
    */
    //getIntersection(&head1,&head2);
//Remove Duplicate in sorted array
    //removeDuplicate(&head);
//Remove Duplicate in unsorted array
    //removeDup(&head);
//Moving Last element to First
    //moveEtoF(&head);
//Moving First Element to Last
  //  moveFtoE(&head);
//Getting the middle element of Linked List N should be odd number.
    //getMiddleElement(&head);

    printList(head);
    return 0;
}
