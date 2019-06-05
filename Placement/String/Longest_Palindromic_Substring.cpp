//Longest Palindromic Substring in O(n2) and space complexity O(1).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ma=1;
        int x=0,y=s.length();
        int l,r;
        for(int i=1;i<y;i++)
        {
            //even length palindrome
            l=i-1;
            r=i;
            while(l>=0 && r<y && s[l]==s[r])
            {
                if(r-l+1 > ma)
                {
                    x=l;
                    ma=r-l+1;
                }
                --l;
                ++r;
            }
            //odd palindrome
            l=i-1;
            r=i+1;
            while(l>=0 && r<y && s[l]==s[r])
            {
                if(r-l+1>ma)
                {
                    x=l;
                    ma=r-l+1;
                }
                --l;
                ++r;
            }
        }
        cout<<"Max Length Palindrome: "<<ma<<endl<<"String is ";
        for(int i=x;i<=(x+ma-1);i++)
        {
            cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}

