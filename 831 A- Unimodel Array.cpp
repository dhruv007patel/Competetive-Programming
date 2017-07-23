#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,f=0;
    cin>>n;
    int m=n;
    int a[n];
    for(int i=0;n>i;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int i=1;
    for(i=1;n>i;i++)
    {
        if(a[i-1]>=a[i])
            break;
    }
     for(;n>i;i++)
    {
        if(a[i-1]!=a[i])
            break;
    }
    for(;n>i;i++)
    {
        if(a[i-1]<=a[i])
            break;
    }


    if(i==n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
