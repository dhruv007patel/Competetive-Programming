#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,c=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;n>i;i++)
    {
        cin>>a[i];
    }
    for(int i=0;n>i;i++)
    {
        if(a[i]>h)
            c+=2;
        else
            c++;
    }
    cout<<c<<endl;

    return 0;
}
