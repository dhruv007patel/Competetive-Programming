#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n+1];
    for(int i=1;n>=i;i++)
    {
        cin>>a[i];
    }
    int c=s,f=0,l=0;
	while(c!=t)
	{
		c = a[c];
		if(c == s)
		{
			f=1;
			break;
		}
		l++;
	}
	if(f)
		cout << -1 << endl;
	else
		cout << l << endl;
}


