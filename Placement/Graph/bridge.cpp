//Bridge is a edge in graph if we split from that edge we get more subgraph TC => O(N+M).
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool>visited;
vector<int> tin,low;
int timer;
void dfs(int v,int p=-1)
{
    visited[v]=true;
    tin[v]=low[v]=timer++;
    for(int to: adj[v])
    {
        if(to==p)
            continue;
        if(visited[to])
            low[v]=min(low[v],tin[to]);
        else
        {
            dfs(to,v);
            low[v]=min(low[v],low[to]);
            if(low[to]>tin[v])
                cout<<v<<" "<<to<<endl;
        }
    }
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    timer = 0;
    adj.resize(n);
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }
    return 0;
}
/*input
7 8
0 1
1 2
2 0
1 3
1 4
1 6
3 5
4 5
*/
