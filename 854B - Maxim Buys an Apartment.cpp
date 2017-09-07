#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,max=0,min=1;
    cin>>n>>k;
    if(k==0 || k==n)
    {
        min=0;
        max=0;
    }
    int x=floor(n/3);
    if(k<=x)
    {
         max=2*k;
    }
   else if(k>x)
    {
         max=n-k;
    }
    cout<<min<<" "<<max;
    return 0;
}
