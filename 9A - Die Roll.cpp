#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  a,b;
    cin>>a>>b;
    int x=max(a,b);
    x=7-x;
    if(x==1)cout<<"1/6";
    if(x==2)cout<<"1/3";
    if(x==3)cout<<"1/2";
    if(x==4)cout<<"2/3";
    if(x==5)cout<<"5/6";
    if(x==6)cout<<"1/1";
    return 0;
}
