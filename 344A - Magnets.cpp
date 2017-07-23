#include<iostream>

using namespace std;

int main()
{   int n,c=1;
    cin>>n;
    int a[n];
    for(int i=0;n>i;i++)
        cin>>a[i];
    for(int i=1;n>i;i++)
    {
        if(a[i-1]!=a[i])
            {
                c++;
            }
        else continue;
    }

    cout<<c;
    return 0;
}
