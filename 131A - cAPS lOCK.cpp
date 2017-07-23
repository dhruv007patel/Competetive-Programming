#include<iostream>
#include<string>

using namespace std;

int main(){
string s;
cin>>s;

    int f=1;
    for (int i=1;i<s.length();i++)
    {
        if (s[i]>='a')
        {
            f = 0;
            break;
        }
    }

    if (f)
    {
        for (int i=0;i<s.length();i++)
        {
            if (s[i]>='a')
            {
                s[i]=s[i]-('a' - 'A');
            }
            else
            {
                s[i]=s[i]+('a' - 'A');
            }
        }
    }

    cout << s << endl;
return 0;
}
