//Kruskal's Algorithm using O(M.logN + N2)
#include<bits/stdc++.h>
using namespace std;
struct Edge
{
    int u,v,wt;
};
bool comp(Edge x,Edge y)
{
    return x.wt < y.wt;
}
vector<Edge> edge;
vector<Edge> r;
int main()
{
    int n,m,cost=0;
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        vec[i]=i;
    }
    Edge x;
    for(int i=0;i<m;i++)
    {
        cin>>x.u>>x.v>>x.wt;
        edge.push_back(x);
    }
    sort(edge.begin(),edge.end(),comp);
    for(Edge e:edge)
    {
        if(vec[e.u]!=vec[e.v])
        {
            cost+=e.wt;
            r.push_back(e);
        }
        int old_id=vec[e.u],new_id=vec[e.v];
        for(int i=0;i<n;i++)
        {
            if(vec[i]==old_id)
                vec[i]=new_id;
        }
    }
    cout<<"MST Cost "<<cost<<endl;
    cout<<"Edges used\n";
    for(auto i:r)
        cout<<i.u<<" "<<i.v<<" "<<i.wt<<endl;
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
