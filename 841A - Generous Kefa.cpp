#include<bits/stdc++.h>

using namespace std;

int main()
{
   long n,k,c=0;
   cin>>n>>k;
   string s;
   cin>>s;
   int v=0;
   int a[26]={0};
   for(int i=0;n>i;i++)
   {
        a[s[i]-'a']++;
    }
    for(int i=0;26>i;i++)
    {
      if(a[i]>k)
      {
          cout<<"NO";
          return 0;
      }
  }
  cout<<"YES";
    return 0;
}


