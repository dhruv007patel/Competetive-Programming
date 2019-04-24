//Longest Common Subsequence
#include<bits/stdc++.h>
using namespace std;
int maxCommonSubq(string x,string y)
{
    int m=x.size();
    int n=y.size();
    int L[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                L[i][j]=0;
            }
            else if(x[i-1]==y[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
int main()
{
    string x,y;
    cin>>x>>y;
    cout<<"Common SubString Length "<<maxCommonSubq(x,y)<<endl;
    return 0;
}
