#include<bits/stdc++.h>

using namespace std;

bool b[105];

int main()
{
    int n,x ;
    cin>>n>>x;
    while (n--)
    {
        int a;
        cin>>a;
        b[a]=1;
    }
    int f=b[x];
    for (int i=0;i<x;i++)
        f+=!b[i];
    cout<<f;
}
