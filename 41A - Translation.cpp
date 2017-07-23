#include<iostream>
#include<string>

using namespace std;


int main()
{   int f=0,g=0;
    string s1,s2,srev;
    cin>>s1;
    cin>>s2;
for(int i=s1.length()-1;i>=0;i--)
    srev+=s1[i];

for(int i=0;s2.size()>i;i++)
if(s2[i]==srev[i]){f++;if(f==s2.size()){g=1;}}

 if(g==1) cout<<"YES";
 else cout<<"NO";

    return 0;
}
