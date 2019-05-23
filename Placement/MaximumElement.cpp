//Tracking Maximum Element using stack
#include<bits/stdc++.h>
using namespace std;
void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    int n,x,m;
    cin>>n;
    stack<int> main;
    stack<int> track;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
        {
            main.push(x);
            track.push(x);
        }
        else
        {
            m=max(track.top(),x);
            main.push(x);
            track.push(m);
        }
    }
    showstack(track);
    return 0;
}
