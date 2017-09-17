#include <bits/stdc++.h>

using namespace std;

int n,k;
int has[100001];

int main()
{
    cin>>n;
    k=n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        has[x]=true;
        while(has[k])
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }
	return 0;
}
