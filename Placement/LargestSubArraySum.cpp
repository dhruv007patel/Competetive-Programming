//Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int a[],int n)
{
    int m_max=INT_MIN,c_max=0;
    for(int i=0;i<n;i++)
    {
        c_max+=a[i];
        if(c_max > m_max)
            m_max=c_max;

        if(c_max<0)
            c_max=0;
    }
    return m_max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Largest Sum: "<<maxSubArray(a,n)<<endl;
    }
    return 0;
}
