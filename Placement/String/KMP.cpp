//KMP algorithm to match String and pattern
#include<bits/stdc++.h>
using namespace std;
//Building array for pattern in O(n).
vector<int> buildArray(string pat)
{
    vector<int> vec(pat.size(),0);
    int j=0;
    for(int i=1;pat[i];)
    {
        if(pat[i]==pat[j])
        {
            vec[i]=j+1;
            j++;
            i++;
        }
        else
        {
            if(j!=0)
            {
                j=vec[j-1];
            }
            else
            {
                vec[i]=0;
                i++;
            }
        }
    }
    return vec;
}
//KMP algorithm
bool KMP(string s,string p)
{
    vector<int> vec=buildArray(p);
    int i=0,j=0;
    int pat_len=p.length();
    while(i<s.length() && j<pat_len)
    {
        if(s[i]==p[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j!=0)
            {
                j=vec[j-1];
            }
            else
                i++;
        }
    }
    if(j==pat_len)
        return true;
    return false;
}
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    if(KMP(s,p))
    {
        cout<<"Match Found\n";
    }
    else
        cout<<"Match not Found\n";
    return 0;
}
