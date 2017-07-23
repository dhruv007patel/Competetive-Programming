#include<iostream>

using namespace std;

int main()
{
    int n,n1,n2,n3;
    cin>>n;
    int s1=0,s2=0,s3=0;

    while(n--)
       {
           cin>>n1>>n2>>n3;
           s1+=n1;
           s2+=n2;
           s3+=n3;
       }

    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
