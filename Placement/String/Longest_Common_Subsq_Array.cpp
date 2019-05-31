// Longest Common Subsequence using DP O(n2).
#include <bits/stdc++.h>
using namespace std;
void LongestCommonSubsequence(vector<int> s1, vector<int> s2)
{
    int m = s1.size();
    int n = s2.size();
    int mat[m + 1][n + 1];
    memset(mat, 0, sizeof(mat));
    int ans = 0, I = 0, J = 0;
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
                mat[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
            {
                mat[i][j] = mat[i - 1][j - 1] + 1;
                if (ans < mat[i][j])
                {
                    ans = mat[i][j];
                    I = i;
                    J = j;
                }
            }
            else
                mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
        }
    }
    stack<int> st;
    while (I && J)
    {
        if (mat[I][J] == 0)
            break;
        else
        {
            if (s1[I - 1] == s2[J - 1])
            {
                st.push(s1[I-1]);
                I--;
                J--;
            }
            else
            {
                if (mat[I][J-1] == mat[I][J])
                    J--;
                else
                    I--;
            }
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    int n1, n2,x;
    cin>>n1>>n2;
    vector<int> s1,s2;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        s1.push_back(x);
    }
    for(int i=0;i<n2;i++)
    {
        cin>>x;
        s2.push_back(x);
    }
    LongestCommonSubsequence(s1, s2);
    return 0;
}
