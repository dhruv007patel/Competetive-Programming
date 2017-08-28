#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;s.length()>i;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
        else if(s[i]=='0')
        {
            cout<<c;
            c=0;
        }
    }
    cout<<c;
    return 0;
}
