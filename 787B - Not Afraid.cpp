#include<bits/stdc++.h>

using namespace std;

int main()
{
   int l,m,c=0;
   cin>>l>>m;
   int s=m;
   while(m--)
   {
       bool f=0;
       int n;
       cin>>n;
       int a[n];
       for(int i=0;n>i;i++){cin>>a[i];}
       for(int i=0;n>i;i++)
       {
            for(int j=i+1;n>j;j++)
                if(!(a[i]+a[j]))
                {
                    c++;
                    f=1;
                    break;
                }
                if(f)
                    break;
       }
    }
    if(s!=c)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
