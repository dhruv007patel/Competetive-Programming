#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;s.length()>i;i++)
    {
        if(s[i-1]=='S'&& s[i]=='F')
        {
            c1++;
        }
        if(s[i-1]=='F' && s[i]=='S')
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
