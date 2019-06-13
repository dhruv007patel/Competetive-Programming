//Topological Sorting
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> ans;
void dfs(int v)
{
    visited[v]=true;
    for(int u:adj[v])
    {
        if(!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}
int main()
{
    int n,m;
    cin>>n>>m;
    adj.resize(1000);
    visited.assign(n,false);
    ans.clear();
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            dfs(i);
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
