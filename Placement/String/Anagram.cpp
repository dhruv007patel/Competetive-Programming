//Checking weather one string is anagram of other.(Permutation of one another)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int cnt1[26]={0};
    int cnt2[26]={0};
    cin>>s1>>s2;
    for(int i=0;s1[i];i++)
    {
        cnt1[s1[i]-'a']++;
    }
    for(int i=0;s2[i];i++)
    {
        cnt2[s2[i]-'a']++;
    }
    int f=0;
    for(int i=0;i<26;i++)
    {
        if(cnt1[i]!=cnt2[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Not Anagram\n";
    }
    else
        cout<<"Anagram\n";
    return 0;
}
