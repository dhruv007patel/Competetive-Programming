//Binary Tree and Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
/*
1) Create a Node struct
2) insertion in BST
3) Level order Insertion
4) Pre-order
5) Post-order
6) In-order
7) Height of Tree
8) Top view of Tree
9) Level Order Travel
10) Searching a Node in BST
11) Lowest Common Ancestor
12) Expression Tree
13) Huffman Decoding
14) Swap Nodes
15)
*/
struct Node
{
    int data;
    int hd;
    Node *left;
    Node *right;
};
struct Node* create(int data)
{
    Node *tmp=new Node();
    tmp->data=data;
    tmp->left=tmp->right=NULL;
    return tmp;
}
// Insert using binary search tree
void insertBST(Node* &root,int data)
{
    if(root==NULL)
    {
        root=create(data);
    }
    else if(root->data > data)
    {
        insertBST(root->left,data);
    }
    else
    {
        insertBST(root->right,data);
    }
}
// Insert using level order traversal
void insert_level(Node* &tmp,int data)
{
    if(tmp==NULL)
    {
        tmp=create(data);
        return;
    }
    queue<struct Node*> q;
    q.push(tmp);

    while(!q.empty())
    {
        struct Node* tmp=q.front();
        q.pop();
        if(!tmp->left)
        {
            tmp->left=create(data);
            break;
        }
        else
            q.push(tmp->left);
        if(!tmp->right)
        {
            tmp->right=create(data);
            break;
        }
        else
            q.push(tmp->right);
    }
}
// Pre-order Traversal
void preorder(Node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Post-order Traversal
void postorder(Node* root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

// In-order Traversal
void inorder(Node* root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

// Height of Tree
int findHeight(Node *root)
{
    if(root)
        return max(findHeight(root->left)+1,findHeight(root->right)+1);
}

// Top View of Tree
void TopView(Node *root)
{
    if(root==NULL)
        return;

    queue<Node*>q;
    map<int,int> m;

    int hd=0;
    root->hd=hd;
    q.push(root);

    cout<<"Top View of tree: ";
    while(q.size())
    {
        hd=root->hd;
        if(m.count(hd)==0)
        {
            m[hd]=root->data;
        }
        if(root->left)
        {
            root->left->hd=hd-1;
            q.push(root->left);
        }
        if(root->right)
        {
            root->right->hd=hd+1;
            q.push(root->right);
        }
        q.pop();
        root=q.front();
    }
    for(auto i:m)
    {
        cout<<i.second<<" ";
    }
    cout<<endl;
}

// Level Order Traversal
void Level_Order_Traversal(Node *root)
{
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    cout<<"Level Order Traversal: ";
    while(q.size())
    {
        Node *tmp=q.front();
        cout<<tmp->data<<" ";
        q.pop();

        if(tmp->left)
        q.push(tmp->left);

        if(tmp->right)
        q.push(tmp->right);
    }
    cout<<endl;
}

//Search Node in Tree
bool search(Node*root,int data)
{
    struct Node *tmp=root;
    if(tmp==NULL)
       return false;
    if(tmp->data==data)
        return true;
    bool b1=false,b2=false;
    if(tmp->data > data)
        b1=search(tmp->left,data);
    if(tmp->data < data)
        b2=search(tmp->right,data);

    return b1||b2;
}

//Lowest Common Ancestor
struct Node *LCA(Node *root,int n1,int n2)
{
    if(root==NULL)
        return NULL;
    if(root->data>n1 && root->data>n2)
        return LCA(root->left,n1,n2);
    if(root->data<n1 && root->data<n2)
        return LCA(root->right,n1,n2);
    return root;
}

int main()
{
    struct Node *root=NULL;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        insertBST(root,n);
    }
    cout<<"Pre-order: ";
    preorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;

    cout<<"In-order: ";
    inorder(root);
    cout<<endl;

    cout<<"Height of the binary tree is: "<<findHeight(root)<<endl;

    cout<<"Top View";TopView(root);cout<<endl;

    cout<<"Level_Order_Traversal";Level_Order_Traversal(root);cout<<endl;

    cout<<"Lowest Common Ancestor :"<<LCA(root,3,6)->data<<endl;

    return 0;
}
