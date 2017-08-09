#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,r,c,f=0;
   bool s=true;
   cin>>n;
   int a[n][n];
   for(int i=0;n>i;i++)
   {
       for(int j=0;n>j;j++)
       {
           cin>>a[i][j];
       }
   }

   for(int i=0;n>i;i++)
   {
       for(int j=0;n>j;j++)
       {
            if(a[i][j]>1)
            {
                f=0;
                for(int k=0;n>k;k++)
                {
                    for(int l=0;n>l;l++)
                    {
                        if(a[i][k]+a[l][j]==a[i][j])
                        f=1;
                    }
                }
                if(!f)
                    s=false;
            }
       }
   }
    if(s)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
