#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(;t>0;t--)
    for(int i=1;s.size()>i;i++)
    {
        if(s[i]=='G'&&s[i-1]=='B')
            {
                s[i]='B';
                s[i-1]='G';
                i++;
            }

    }
    cout<<s;
    return  0;
}
