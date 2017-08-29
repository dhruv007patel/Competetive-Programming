#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,x,y;
    double i,k;
    cin>>l>>r>>x>>y>>k;
    for(i=x;i<=y;i++)
    {
        if(k*i>=l&&k*i<=r)
            return cout<<"YES",0;
    }
    cout<<"NO";
}
