//Dijkstra Algorithm using set  TC -> O(E log V) // undirected graph.
//Along with printing shortest path
#include<bits/stdc++.h>
#define pairs pair<int,int>
#define ll long long
using namespace std;
ll d[100005];
list<pairs> *g;
ll parent[100005];
void dijkstra(int root)
{
    int u,v,wt;
    set<pairs> s;
    set<pairs> ::iterator si;
    list<pairs> ::iterator gi;
    d[root]=0;
    s.insert({0,root});
    while(s.size()!=0)
    {
        si=s.begin();
        u=si->second;
        s.erase(si);
        for(gi=g[u].begin();gi!=g[u].end();gi++)
        {
            v=gi->first;
            wt=gi->second;
            if(d[v]>d[u]+wt)
            {
                d[v]=d[u]+wt;
                parent[v]=u;
                s.insert({d[v],v});
            }
        }
    }
}
void printPath(int j)
{
    cout<<j<<" ";
    if(parent[j]==-1)
        return;
    printPath(parent[j]);
}
void addEdge(int src,int dest,int wt)
{
    pairs x;
    //directed graph
    x.first=dest;
    x.second=wt;
    g[src].push_front(x);

    //In-case of undirected graph
    x.first=src;
    x.second=wt;
    g[dest].push_front(x);

}
int main()
{
    parent[0]=-1;
    int i,t;
    cin>>t;
    while(t--)
    {
        int v,e,src,dest,wt;
        cin>>v>>e;
        for(i=0;i<v+1;i++)
            d[i]=INT_MAX;
        g=new list<pairs>[v+1];
        for(i=0;i<e;i++)
        {
            cin>>src>>dest>>wt;
            addEdge(src,dest,wt);
        }
        //Gives shortest path b/w  x and y.
        int x,y;
        cin>>x>>y;
        dijkstra(x);
        cout<<"Path from dest to src: ";
        printPath(y);
        cout<<endl;
        if(d[y]!=INT_MAX)
            cout<<"Shortest Distance: "<<d[y]<<endl;
        else
            cout<<"Shortest Distance: INF"<<endl;
    }
    return 0;
}
/*
INPUT
1
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
0 4
*/
