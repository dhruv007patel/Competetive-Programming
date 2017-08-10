#include<bits/stdc++.h>

using namespace std;
bool isMagical(string l)
{
    for(int i=0;l.length()>i;i++)
        if(l[i]!='1' && l[i]!='4')
            return false;

    if(l[0]=='4')
        return false;
    if(l.find("444")!=l.npos)
        return false;

        return true;
}
int main()
{
   string s;
   cin>>s;

       if(isMagical(s))
            cout<<"YES";
       else
            cout<<"NO";




    return 0;
}
