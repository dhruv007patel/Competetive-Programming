#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,w,sum=0;
    long int n;
    cin>>k>>n>>w;

    for(int i=1;w>=i;i++)
    {
        sum=sum+(k*i);
    }
    if(sum>n)
    {
        cout<<sum-n;
    }

    else
        cout<<0;

    return 0;
}
