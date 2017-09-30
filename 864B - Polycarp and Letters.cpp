#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,cm=0;
    cin>>n;
    set<char> a;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            a.insert(s[i]);
            c=a.size();
        }
        else
        {
            if(c>cm)
            cm=c;
            a.clear();
        }
    }
    cout<<max(c,cm);
    return 0;
}
