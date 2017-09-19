#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool t=true;
    for(int i=1;i<n-1;i++)
    {
        t=t&(2*a[i]==a[i-1]+a[i+1]);
    }
    if(!t)
    {
        cout<<a[n-1];
    }
    else
    {
        cout<<a[n-1]+(a[1]-a[0]);
    }
    return 0;
}
