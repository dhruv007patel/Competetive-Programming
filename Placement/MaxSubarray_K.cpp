#include<bits/stdc++.h>
using namespace std;
void MaxSubSum(int a[],int n,int k)
{
    deque<int> d(k);
    int i;
    for(i=0;i<k;++i)
    {
        //removing all other elements which are smaller than current element
        while(!d.empty() && a[i]>=a[d.back()])
            d.pop_back();

        //adding new elements at rear
        d.push_back(i);
    }
    for(;i<n;++i)
    {
        cout<<a[d.front()]<<" ";

        //removing elements which are out of the window from front
        while(!d.empty() && d.front()<=i-k )
            d.pop_front();

        //removing all other elements which are smaller than current element
        while(!d.empty() && a[i]>=a[d.back()])
            d.pop_back();

        //adding new elements at rear elements
        d.push_back(i);
    }
    cout<<a[d.front()];
}
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
        MaxSubSum(a,n,k);
        cout<<endl;
    }
    return 0;
}
