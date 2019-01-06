#include<bits/stdc++.h>
using namespace std;
void printSubStr(string s,int low,int high)
{
    for(int i=low;i<=high;++i)
    {
        cout<<s[i];
    }
}
void func(string s)
{
    int max_len=1;
    int start=0;
    int len=s.length();
    int low,high;
    for(int i=1;i<len;i++)
    {
        low=i-1;
        high=i;
        while(low>=0 && high<len && s[low]==s[high])
        {
            if(high-low+1>max_len)
            {
                start=low;
                max_len=high-low+1;
            }
            --low;
            ++high;
        }
        low=i-1;
        high=i+1;
        while(low>=0 && high<len && s[low]==s[high])
        {
            if(high-low+1>max_len)
            {
                start=low;
                max_len=high-low+1;
            }
            --low;
            ++high;
        }
    }
    printSubStr(s,start,start+max_len-1);
    return;
}
int main()
{
    string s;
    cin>>s;
    func(s);
    return 0;
}
