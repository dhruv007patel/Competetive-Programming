#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int i=n,j=0,m=n;
   while(k!=0)
   {
       cout<<n<<" ";
       n-=1;
       j++;
       k--;
   }
   i=j;int d;
   for(d=1;m>i;i++,d++)
   {
       cout<<d<<" ";
   }
    return 0;
}

