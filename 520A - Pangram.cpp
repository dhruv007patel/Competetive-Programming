#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,a[26];
   string s;
   cin>>n>>s;
   for(int i=0;i<n;i++)
   {
        s[i]=tolower(s[i]);
        a[s[i]-'a']=1;
   }
   for(int i=0;i<26;i++)
   	if(a[i]==0)
   	{
   		cout<<"NO"<<endl;
   		return 0;
   	}
   	cout<<"YES"<<endl;

	return 0;
}
