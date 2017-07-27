#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    int s=a1+a2+a3;
    int t=s*s-a1*a1-a3*a3-a5*a5;
    cout<<t<<endl;

    return 0;
}
