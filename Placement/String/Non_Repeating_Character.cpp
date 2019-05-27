//First Non-Repeating Character in O(n)
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int index;
    int cnt;
};
int main()
{
    string s;
    cin>>s;
    Node arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i].index=INT_MAX;
        arr[i].cnt=0;
    }
    for(int i=0;s[i];i++)
    {
        arr[s[i]-'a'].cnt++;
        arr[s[i]-'a'].index=min(arr[s[i]-'a'].index,i);
    }
    int pos=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(arr[i].cnt==1)
            pos=min(pos,arr[i].index);
    }
    cout<<"First Non-Repeating Character "<<s[pos]<<endl;
    return 0;
}
