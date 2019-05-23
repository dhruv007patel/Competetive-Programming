//Stack using Array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int a[MAX]={0};
int cnt=-1;
void push(int a[],int n)
{
    a[++cnt]=n;
}
void pop()
{
    a[cnt--]=0;
}
void view()
{
    for(int i=0;i<=cnt && i<MAX;i++)
    {
        cout<<a[i]<<" ";
        if(a[i]==0)
            break;
    }
    cout<<endl;
}
int main()
{
    push(a,10);
    view();
    push(a,20);
    view();
    push(a,25);
    view();
    pop();
    view();
    pop();
    view();
    return 0;
}
