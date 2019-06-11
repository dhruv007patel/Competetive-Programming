//The time complexity of DFS is O(V + E), where V is the number of nodes and E is the number of edges using adj list.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m,d[10005];
bool ok[100005];
vector<ll> g[100005];
void dfs(ll u)
{
	cout<<u<<" ";
	ok[u]=true;
	for(int i=0;i<g[u].size();i++)
    {
		ll v=g[u][i];
		if(!ok[v])
            dfs(v);
	}
}
int main()
{
    ll u,v;
	cin>>n>>m;
    for(int i=0;i<m;i++)
    {
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	//to handle connected graph
	dfs(2);
    //to handle disconnected graph
	for(int i=0;i<n;i++)
    {
		if(!ok[i])
        {
            dfs(i);
        }
    }
	return 0;
}
/*
input
4 6
0 1
0 2
1 2
2 0
2 3
3 3
*/
