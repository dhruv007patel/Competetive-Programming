//Longest Palindromic Subsequence in O(n2)
#include<bits/stdc++.h>
using namespace std;
void LPS(string s)
{
    int n=s.size();
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    int len=0;

    //Length = 1
    for(int i=0;i<n;i++)
        mat[i][i]=1;

    len=2;
    //For length greater than 3
    while(len<=n)
    {
        for(int i=0;i<n-len+1;i++)
        {
            int j=i+len-1;
            if(s[i]==s[j] && len==2)
                mat[i][j]=2;
            else if(s[i]==s[j])
                mat[i][j]=mat[i+1][j-1]+2;
            else
                mat[i][j]=max(mat[i+1][j],mat[i][j-1]);
        }
        len++;
    }
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int i=0,j=n-1;
    string s1="";
    string s2="";
    while(i<n && j>=0 && mat[i][j]!=0)
    {
        if(s[i]==s[j])
        {
            s1+=s[i];
            s2+=s[j];
            i++;
            j--;
        }
        else
        {
            if(mat[i][j-1]>mat[i][j])
                j--;
            else
                i++;
        }
    }
    int ma=mat[0][n-1];
    if(s1.length()+s2.length()!=ma)
        s1.erase(s1.length()-1);
    reverse(s2.begin(),s2.end());
    cout<<s1+s2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        LPS(s);
    }
    return 0;
}
