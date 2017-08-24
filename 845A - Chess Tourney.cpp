#include <bits/stdc++.h>

using namespace std;

int main() {

   int n,m,f=0;
   cin>>m;
   n=2*m;
   int a[n];
   for(int i=0;n>i;i++)
   {
        cin>>a[i];
   }
   sort(a,a+n);
    for(int i=0,j=n-1;(n/2)>i;i++,j--)
    {
        if (a[i]>=a[j])
        {
            f=1;
        }
    }
    if(f==1)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
