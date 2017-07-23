#include<iostream>

using namespace std;

int main()
{   int n,p,q,c=0;
    cin>>n;
    int a[n][n];
    for(int i=0;n>i;i++)
        for(int j=0;2>j;j++)
            cin>>a[i][j];

    for(int i=0;n>i;i++)
        if(a[i][1]-a[i][0]>=2){c++;}

    cout<<c;

    return 0;
}
