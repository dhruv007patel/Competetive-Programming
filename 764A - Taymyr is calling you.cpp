#include <bits/stdc++.h>

using namespace std;

long long  gcd(long long x,long long y)
{
    return y==0?x:gcd(y,x%y);
}
long long lcm(long long x,long long y)
{
    return x/gcd(x,y)*y;
}
int main()
{
  long long  a,b,c;
  cin>>a>>b>>c;
  long long ab=lcm(a,b);
  cout<<c/ab<<endl;
}
