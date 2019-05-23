//Balanced String using Stack
#include<bits/stdc++.h>
using namespace std;
string func(string s)
{
    stack<char> st;
    char x;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            return "NO";
            if(s[i]=='}')
            {
                x=st.top();
                st.pop();
                if(x!='{')
                    return "NO";
            }
            if(s[i]==')')
            {
                x=st.top();
                st.pop();
                if(x!='(')
                    return "NO";
            }
            if(s[i]==']')
            {
                x=st.top();
                st.pop();
                if(x!='[')
                    return "NO";
            }
        }
    }
    if(!st.empty())
        return "NO";
    return "YES";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<func(s)<<endl;
    }
    return 0;
}
