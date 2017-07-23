#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
int i,j;
string s,s1,s2;
cin>>s;
for(i=0;s.size()>i;i++)
{ if(s[i]=='+'){continue;}
else {s1=s1+s[i];}}
sort(s1.begin(),s1.end());

  for(i=0;i<s1.size();i++){
        cout<<s1[i];
        if(i<s1.size()-1)
            cout<<"+";
    }


return 0;
}
