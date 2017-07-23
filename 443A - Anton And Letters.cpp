#include<iostream>
#include<algorithm>
#include<vector>
#include<string>


using namespace std;

int main()
{   string s;
    getline(cin,s);
    if(s=="{}")
    {
        cout<<0;
    }
    else
    {
        int t=0;
        vector <char> v;

        for(unsigned int i=1;s.size()>i;i+=3)
        {
            if(count(v.begin(),v.end(),s[i])==0)
            {
                t++;
                v.push_back(s[i]);
            }
        }

        cout<<t;
    }
    return 0;
}
