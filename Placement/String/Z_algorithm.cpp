// Z algorithm for pattern matching. Making Z-array in TC ==> O(n+m) and SC ==>O(n+m).
#include<bits/stdc++.h>
using namespace std;
//Builds Z-array in  TC==>([n+m]2).
vector<int> z_function_trivial(string s)
{
    int n=s.size();
    vector<int> z(n,0);
    for(int i=1;i<n;i++)
    {
        while( i+z[i] < n && s[z[i]]==s[i+z[i]] )
            ++z[i];
    }
    return z;
}
//Builds the Z array in O(n+m)
vector<int> z_function_fast(string s)
{
    int n=s.size();
    vector<int> z(n,0);
    for(int i=1,r=0,l=0;i<n;i++)
    {
        if(i<=r)
            z[i]=min(r-i+1,z[i-1]);
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
            ++z[i];
        if(i+z[i]-1 > r)
            l=i,r=i+z[i]-1;
    }
    return z;
}
int main()
{
    string s,p;
    cin>>s>>p;
    int p_len=p.length();
    s=p+"$"+s;

    //vector<int> z=z_function_trivial(s);
    vector<int> z=z_function_fast(s);
    if(find(z.begin(),z.end(),p_len)!=z.end())
    {
        cout<<"The following pattern is found at position:\n";
        for(int i=0;i<z.size();i++)
        {
            if(z[i]==p_len)
                cout<<i-p_len-1<<" ";
        }
    }
    else
        cout<<"Pattern does not match the given string\n";
    return 0;
}
