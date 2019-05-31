//Longest Common Substring using DP O(n2).
#include<bits/stdc++.h>
using namespace std;
int LongestCommonSubstring(string s1,string s2)
{
    int m=s1.length();
    int n=s2.length();
    int mat[m+1][n+1];
    memset(mat,0,sizeof(mat));
    int ans=0,I=0,J=0;
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0||j==0)
                mat[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                mat[i][j]=mat[i-1][j-1]+1;
                if(ans<mat[i][j])
                {
                    ans=mat[i][j];
                    I=i;
                    J=j;
                }
            }
            else
                mat[i][j]=0;
        }
    }
    string s="";
    while(I&&J)
    {
        if(mat[I][J]!=0)
            s+=s1[I-1];
        else
            break;
        I--;
        J--;
    }
    reverse(s.begin(),s.end());
    cout<<"Longest Common Substring: "<<s<<endl;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        string s1,s2;
        cin>>s1>>s2;
        cout<<LongestCommonSubstring(s1,s2)<<endl;
    }
    return 0;
}
