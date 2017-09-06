#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if (a==0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int n,a=0,b=0;
    cin>>n;
    for(int i=1;n>=i;i++)
        for(int j=1;n>=j;j++)
           if(gcd(i,j)==1)
               if(i<j && i+j==n)
               {
                   a=i;
                   b=j;
               }
    cout<<a<<" "<<b;
    return 0;
}
