#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(8);
    for(int i=0;i<n;i++)
    {
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                a[i]+=s[i]-'0';
            }
    }
        int m=a[0];
        for(int i=0;8>i;i++)
        {
            if(a[i]>m)
            {
                m=a[i];
            }
        }
        cout<<m;
    return 0;
}
