#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;n>i;i++)
    {
        cin>>a[i];
    }
    for(int i=0;n>i;i++)
    {
        if(a[i]!=0)
            c++;
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
