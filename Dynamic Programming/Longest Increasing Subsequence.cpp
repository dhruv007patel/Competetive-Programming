//Longest Increasing Subsequence
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int A[n];
    A[0]=1;
    for(int i=1;i<n;i++)
    {
        A[i]=1;
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j] && A[i]<A[j]+1)
            {
                A[i]=A[j]+1;
            }
        }
    }
    cout<<*max_element(A,A+n)<<endl;
    return 0;
}
/*
    Recursive Function
    Then, L(i) can be recursively written as:
    L(i) = 1 + max( L(j) ) where 0 < j < i and arr[j] < arr[i]; or
    L(i) = 1, if no such j exists.
    To find the LIS for a given array, we need to return max(L(i)) where 0 < i < n.
*/
