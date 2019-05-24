//Simple Text Editor -HackerRank
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    string ostring="";
    stack<string> st;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            //append string in Original String;
            string s;
            cin>>s;
            st.push(ostring);
            ostring+=s;
        }
        if(t==2)
        {
            //Delete
            int k;
            cin>>k;
            st.push(ostring);
            ostring.erase(ostring.begin()+(ostring.length()-k),ostring.end());
        }
        if(t==3)
        {
            //Print
            int k;
            cin>>k;
            cout<<ostring[k-1]<<endl;
        }
        if(t==4)
        {
            //Undo
            ostring=st.top();
            st.pop();
        }
    }
    return 0;
}
