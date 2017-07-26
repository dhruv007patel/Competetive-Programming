#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    cin>>x>>y>>z;
    a=a-x;
    b=b-y;
    c=c-z;

    if(a>0)
    {
        a=a/2;
    }
    if(b>0)
    {
        b=b/2;
    }
   if(c>0)
   {
       c=c/2;
   }
   if(a+b+c>=0)
   {
       cout<<"Yes";
   }
   else
    cout<<"No";


        return 0;
}
