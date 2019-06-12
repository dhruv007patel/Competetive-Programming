#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m,cc=-1,d[10005];
bool ok[100005];
vector<ll> ke[100005];
void dfs(ll u)
{
	cout<<u<<" ";
	ok[u] = true;
	for(int i = 0; i < ke[u].size(); i++)
    {
		ll v = ke[u][i];
		if(!ok[v])
        {
            dfs(v);
            cc++;
            cout<<endl;
        }
	}
}
int main()
{
    ll u, v;
	cin>> n>> m;
	while(m--)
    {
		cin>> u>> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	cout<<"Groups of connected components :\n";
	for(int i=0;i<n;i++)
    {
		if(!ok[i]) dfs(i);
	}
	cout<<"Connected components:"<<cc<<endl;
	return 0;
}
/*
Input
5 3
0 1
2 3
3 4
*/

