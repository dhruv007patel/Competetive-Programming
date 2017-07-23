#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{   string s;
    cin>>s;
    vector <char> c;
    for(unsigned int i=0;s.size()>i;i++)
    {
        if(count(c.begin(),c.end(),s[i])==0)
            c.push_back(s[i]);
    }
    if(c.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
