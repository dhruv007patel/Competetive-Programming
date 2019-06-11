//The time complexity of BFS is O(V + E), where V is the number of nodes and E is the number of edges.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,d[10005];
bool ok[10005];
vector<ll> g[10005];
queue<ll> q;
void bfs(int u)
{
    q.push(u);
    ok[u]=true;
    while(q.size())
    {
        u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<g[u].size();i++)
        {
            ll v=g[u][i];
            if(!ok[v])
            {
                q.push(v);
                ok[v]=true;
            }
        }
    }
}
int main()
{
    //n - no. of nodes
    //m - no. of edges
    int u,v,n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=0;i<n;i++)
    {
        if(!ok[i])
            bfs(i);
    }
    return 0;
}
