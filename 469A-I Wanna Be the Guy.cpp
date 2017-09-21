#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,ans=0,m,j=1;
    cin>>n>>x;
    int a [x];
    for (int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    cin>>y;
    int b [y];
    for(int i=0;i<y;i++)
    {
        cin>>b [i];
    }
    m=max(x,y);
    for(int i=0;i<m;i++)
    {
        if(a[i]==j||b[i]==j)
        {
            ans++;
            j++;
            i=-1;
        }
    }
    if (ans==n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
