#include<bits/stdc++.h>

using namespace std;

 int main()
 {
   int n,c=0,a[26]={};
   cin>>n;
   string s;
   cin>>s;
   if(n>26)
   {
       cout<<-1;
       return 0;
   }
    for(int i=0;s.length()>i;i++)
    a[s[i]-'a']++;

    for(int i=0;26>i;i++)
    {
        if(a[i]!=0)
        {
            c++;
        }
    }
    cout<<n-c;
    return 0;
 }
