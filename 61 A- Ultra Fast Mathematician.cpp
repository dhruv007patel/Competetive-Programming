#include<iostream>

using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;


    for(int i=0;s.size()>i;i++)
    {
        if(s[i]==s1[i])
        {
            cout<<0;
        }
        else
            cout<<1;
    }



    return 0;
}
