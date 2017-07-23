#include<iostream>
#include<string>
#include<cctype>

using namespace std;


int main()
{   int u=0,l=0;
    string s;
    cin>>s;
    for(int i=0;s.size()>i;i++)
    {
        if(isupper(s[i]))
            {
                u++;
            }
        else l++;
    }

    if(u>l)
        for(int i=0;s.size()>i;i++)
        {
            s[i]=towupper(s[i]);
        }

    else
        for(int i=0;s.size()>i;i++)
        {
            s[i]=towlower(s[i]);
        }

    cout<<s;


    return 0;
}
