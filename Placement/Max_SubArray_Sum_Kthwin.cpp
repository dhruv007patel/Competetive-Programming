//Max-SubArraySum of size k using sliding window in O(n).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int win_sum=0,max_sum=0;
        for(int i=0;i<k;i++)
        {
            max_sum+=a[i];
        }
        win_sum=max_sum;
        for(int i=k;i<n;i++)
        {
            win_sum+=a[i]-a[i-k];
            max_sum=max(max_sum,win_sum);
        }
        cout<<max_sum<<endl;
    }
    return 0;
}
