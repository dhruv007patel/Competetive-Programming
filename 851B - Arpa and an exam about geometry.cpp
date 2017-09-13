#include<iostream>

using namespace std;

long long ax,ay,bx,by,cx,cy,dx,dy,ex,ey,fx,fy;
int main()
{

	cin>>ax>>ay>>bx>>by>>cx>>cy;
	dx=bx-ax;
	dy=by-ay;
	ex=cx-ax;
	ey=cy-ay;
	fx=cx-bx;
	fy=cy-by;
	if (dx*ey==ex*dy)
	{
	    cout<<"No";
	    return 0;

	}
	if (dx*dx+dy*dy!=fx*fx+fy*fy)
	{
	    cout<<"No";
	    return 0;

	}
	cout<<"Yes";
}
