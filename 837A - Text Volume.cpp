#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    int n,m=0,c=0,f=0;
    cin>>n;
    string s;
    getline(cin,s);
    getline(cin,s);
    for(int i=0;n>i;i++)
    {
        if(s[i]==' ')
        {
           m=max(m,c);
            c=0;
            f=1;
        }
        else if(s[i]<'a' && s[i]>='A')
        {
            c++;
            m=max(m,c);
        }
    }
    if(f==1)
        cout<<m;
    else
        cout<<c;
    return 0;
 }
