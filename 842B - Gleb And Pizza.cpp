#include <bits/stdc++.h>

using namespace std;

int main() {

	int r,d,n;
	cin>>r>>d>>n;
	int R,X,Y;
	int c=0;
	for(int i=0;i<n;i++)
    {
	    cin>>X>>Y>>R;
	    float dist=(X*X+Y*Y);
	    dist=sqrt(dist);
	    if(dist<=r && dist>=r-d+R)
	    {
            c++;
	    }
	}
	cout<<c;
	return 0;
}
