#include<bits/stdc++.h>
using namespace std;
int EP(int a[],int n)
{
    int sum=0;
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        if(leftsum==sum)
            return i+1;
        leftsum+=a[i];
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<EP(a,n)<<endl;
    }
    return 0;
}
