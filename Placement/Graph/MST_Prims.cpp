//Prim's Algorithm using Min heap TC O([V+E].(logV)) can be improved to (E+logV) using Fibonacci heap
#include<bits/stdc++.h>
#define pairs pair<int,int>
using namespace std;

priority_queue<pairs,vector<pairs>,greater<pairs>> edge;
vector<vector<pairs>> ad(1000);

int n,m;
int vis[1001]={0};
int mst_w=0;

int main()
{
    cin>>n;
    cin>>m;
    int u,v,wt;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>wt;
        ad[u].push_back({wt,v});
        ad[v].push_back({wt,u});
    }
    int x=1,y=0;
    while(y<n-1)
    {
        vis[x]=1;
        y++;
        //push all the edges which are present in adjacent list
        for(int i=0;i<ad[x].size();i++)
            edge.push(ad[x][i]);

        //checking if it create a cycle and pop it.
        while(vis[edge.top().second]==1)
            edge.pop();

        //adding top edge
        mst_w=mst_w+edge.top().first;
        x=edge.top().second;
        edge.pop();
    }
    cout<<"MST weight is: "<<mst_w<<endl;
    return 0;
}
/*INPUT
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
