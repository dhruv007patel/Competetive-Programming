#include<iostream>

using namespace std;

int main()
{
    int a,b,f=0;
    cin>>a>>b;

    while(a<=b)
    {
        a=3*a;
        b=2*b;
        f++;
    }
    cout<<f;
    return 0;
}
