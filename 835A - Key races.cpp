#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    t1=2*t1;
    t2=2*t2;
    int c1=s*v1+t1;
    int c2=s*v2+t2;
    if(c1<c2)
    {
        cout<<"First";
    }
    else
        if(c2<c1)
    {
        cout<<"Second";
    }
    else
        cout<<"Friendship";
    return 0;
}
