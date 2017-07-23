#include<iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int f=0;
    for(int i=1;d>=i;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
                ++f;
        }

    }
    cout<<f;
    return 0;
}
