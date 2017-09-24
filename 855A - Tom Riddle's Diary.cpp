#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool f=false;
    cin>>n;
    n+=1;
    string s[n];
    for(int i=0;n>i+1;i++)
    {
        f=false;
        cin>>s[i];
        for(int j=0;i>j;j++)
        {
            if(s[i].compare(s[j])==0)
            {
                f=true;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
