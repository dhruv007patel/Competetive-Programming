#include <bits/stdc++.h>

using namespace std;

int n;
int c=0;
bool b[26];
string s;
int main()
{
    cin>>s;
    cin>>n;
    if(n>s.length())
    {
        cout<<"impossible";
        return 0;
    }
    for(int i=0;s.length()>i;i++)
    {
        if(!b[s[i]-'a'])
        {
            c++;
            b[s[i]-'a']=true;
        }
    }
    int r=n-c;
    r=(r>=0)?r:0;
    cout<<r;
    return 0;
}
