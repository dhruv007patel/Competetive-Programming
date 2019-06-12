//Floyd Warshall  All Pair Shortest Path in O(V3).
#include<bits/stdc++.h>
#define INF 99
using namespace std;
int main()
{
    int v;
    cin>>v;
    int d[v][v],i,j,k;
    memset(d,INF,sizeof(d));
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cin>>d[i][j];
        }
    }
    for(k=0;k<v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(i==j)
                    d[i][j]=0;
                else
                    if(d[i][k]+d[k][j]<d[i][j])
                    d[i][j]=d[i][k]+d[k][j];
            }
        }
    }

    //Printing all shortest Path
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(d[i][j]==INF)
                cout<<"INF ";
            else
                cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
